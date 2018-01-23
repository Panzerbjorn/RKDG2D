//- RKDG 2D v.0.1
//  Structured rectangular mesh



#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>
#include "defs.h"
#include "Mesh2D.h"
#include "Solver.h"
#include "FluxLLF.h"
#include "FluxHLL.h"
#include "FluxHLLC.h"
#include "IndicatorNowhere.h"
#include "IndicatorEverywhere.h"
#include "IndicatorKXRCF.h"
#include "LimiterFinDiff.h"
#include "LimiterMUSCL.h"
#include "LimiterWENOS.h"

using namespace std;




int main(int argc, char** argv)
{    
    // Mesh parameters

//    double Lx = 1.0;
//    double Ly = 1.0;

//    int nx = 100;
//    int ny = 1;

    double Lx = 12.0;
    double Ly = 12.0;

    int nx = 60;
    int ny = 60;

    // Time parameters

    double Co = 0.2;
    double tEnd = 40.0;

    int freqWrite = 1;

    // ---------------

    // Initialize mesh
    Mesh2D mesh(nx, ny, Lx, Ly);

    mesh.exportMesh();

    // Initialize problem
    Problem problem;

    // Initialize flux
    FluxHLLC numFlux(problem);

    // Initialize solver
    Solver solver(mesh, problem, numFlux);

    // Initialize indicator
    IndicatorNowhere indicator(mesh);

    //Initialize limiter
    LimiterWENOS limiter(indicator,problem);

    // ---------------

    // Set initial conditions
    solver.setInitialConditions();

    // Set boundary conditions
    solver.setBoundaryConditions();

    // Set mesh pointer in case of DiagProject BC
    solver.setMeshPointerForDiagBC();

    // time step

    double tau = min(mesh.cells[0]->h().x(),mesh.cells[0]->h().y()) * Co;
        // sound speed = 1 --- const in acoustic problems
        // only for uniform mesh hx and hy are similar for all cells


    // run Runge --- Kutta 2 TVD

    vector<numvector<double, 5*nShapes>> k1, k2;

    k1.resize(mesh.nCells);
    k2.resize(mesh.nCells);

    clock_t t1, t2, t00;

    t00 = clock();

    int iT = 1; //iteration number

    for (double t = tau; t <= tEnd + 0.5*tau; t += tau)
    {
       t1 = clock();

       cout << "---------\nt = " << t << endl;

       k1 = solver.assembleRHS(solver.alphaPrev);
       solver.alphaNext = solver.alphaPrev + k1 * tau;

       limiter.limit(solver.alphaNext);

       k2 = solver.assembleRHS(solver.alphaNext);
       solver.alphaNext = solver.alphaPrev + (k1 + k2) * 0.5 * tau;

       limiter.limit(solver.alphaNext);

       if (iT % freqWrite == 0)
       {
           //string fileName = "alphaCoeffs/" + to_string((long double)t);
           string fileName = "alphaCoeffs/" + to_string(t);

           ofstream output;
           output.open(fileName);

           solver.write(output,solver.alphaNext);

           output.close();
       }

       solver.alphaPrev = solver.alphaNext;

       iT++;

       t2 = clock();

       cout << "step time: " << (float)(t2 - t1) / CLOCKS_PER_SEC << endl;
    }

    cout << "=========\nElapsed time = " << (float)(t2 - t00) / CLOCKS_PER_SEC << endl;
    cout << "---------\nEND \n";

    //cin.get();
	return 0;
}

