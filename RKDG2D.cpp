//- RKDG 2D v.0.1
//  Structured rectangular mesh

#include <stdio.h>
#include <iostream>
#include <string>

#include "defs.h"
#include "TimeClass.h"
#include <time.h>
#include "Mesh2D.h"
#include "Solver.h"
#include "FluxLLF.h"
#include "FluxHLL.h"
#include "FluxHLLC.h"
#include "IndicatorNowhere.h"
#include "IndicatorEverywhere.h"
#include "IndicatorKXRCF.h"
#include "IndicatorHarten.h"
#include "LimiterFinDiff.h"
#include "LimiterMUSCL.h"
#include "LimiterWENOS.h"


using namespace std;


int main(int argc, char** argv)
{    

    // Mesh parameters

    double Lx = 1.0;
    double Ly = 1.0;

    int nx = 10;
    int ny = 10;


//    double Lx = 1.0;
//    double Ly = 1.0;

//    int nx = 100;
//    int ny = 1;

//    double Lx = 10.0;
//    double Ly = 1;

//    int nx = 128;
//    int ny = 1;

    // Time parameters

//    double Co = 0.1;
//    double tEnd = 3.0;

//    int freqWrite = 100;

    double Co = 0.1;
    double tEnd = 0.001;

    int freqWrite = 100;

    // ---------------

    // Initialize time
    Time time;

    // Initialize problem
    Problem problem(time);

    // Initialize mesh
    Mesh2D mesh(nx, ny, Lx, Ly, problem);

//    mesh.importMesh("Mesh_1.unv");

    mesh.exportMesh();

//    mesh.exportUniformMesh();

//    problem.setBoundaryConditions(mesh.patches);

//    // Initialize flux
//    FluxLLF numFlux(problem);

<<<<<<< HEAD
//    // Initialize solver
//    Solver solver(mesh, problem, numFlux);
=======
    // Initialize indicator
    IndicatorKXRCF indicator(mesh, problem);
>>>>>>> parent of f735259... fixed bugs in Harten & WENO_S

//    // Initialize indicator
//    IndicatorHarten indicator(mesh, problem);

//    //Initialize limiter
//    LimiterWENOS limiter(indicator, problem);

//    // ---------------

//    // Set initial conditions
//    solver.setInitialConditions();

//    // Set mesh pointer in case of DiagProject BC
//    solver.setMeshPointerForDiagBC();

//    // time step

//    double tau = min(mesh.cells[0]->h().x(),mesh.cells[0]->h().y()) * Co;
//        // sound speed = 1 --- const in acoustic problems
//        // only for uniform mesh hx and hy are similar for all cells


//    // run Runge --- Kutta 2 TVD

//    vector<numvector<double, 5*nShapes>> k1, k2;

//    k1.resize(mesh.nCells);
//    k2.resize(mesh.nCells);

//    clock_t t1, t2, t00;

//    t00 = clock();


//    int iT = 1; //iteration number

//    for (double t = tau; t <= tEnd + 0.5*tau; t += tau)
//    {
//       t1 = clock();

//       time.updateTime(t);

//       cout << "---------\nt = " << t << endl;

//       k1 = solver.assembleRHS(solver.alphaPrev);
//       solver.alphaNext = solver.alphaPrev + k1 * tau;


//       limiter.limit(solver.alphaNext);

//       k2 = solver.assembleRHS(solver.alphaNext);
//       solver.alphaNext = solver.alphaPrev + (k1 + k2) * 0.5 * tau;

       //cout << "before limiting" << solver.alphaNext[49] << endl;

 //      limiter.limit(solver.alphaNext);

       //cout << "after limiting" << solver.alphaNext[49] << endl;


//       limiter.limit(solver.alphaNext);

//       if (iT % freqWrite == 0)
//       {
//           //string fileName = "alphaCoeffs/" + to_string((long double)t);
//           string fileName = "alphaCoeffs/" + to_string(t);

//           ofstream output;
//           output.open(fileName);

//           solver.write(output,solver.alphaNext);

//           output.close();
//       }

//       solver.alphaPrev = solver.alphaNext;

//       iT++;

//       t2 = clock();

//       cout << "step time: " << (float)(t2 - t1) / CLOCKS_PER_SEC << endl;
//    }

//    cout << "=========\nElapsed time = " << (float)(t2 - t00) / CLOCKS_PER_SEC << endl;
    cout << "---------\nEND \n";

    //cin.get();
	return 0;
}

