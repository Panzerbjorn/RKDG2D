#ifndef CELL_H
#define CELL_H

/// ------------------------------
/// Cell class
/// ------------------------------
/// Consists of 4 edges
/// Know its Gauss points
/// Can evaluate RHS inside cell
/// ------------------------------

#include "Point.h"
//#include "Edge.h"
#include "numvector.h"
//#include "Problem.h"
#include "defs.h"

#include <functional>
#include <memory>
#include <math.h>
#include <algorithm>

class Edge;
class Problem;


class Cell
{

private:

    //- Number of Gauss points
    int nGP;

    //- Gauss points
    std::vector<Point> gPoints2D;

    //- Gauss weights
    std::vector<double> gWeights2D;

    //- Jacobian
    std::vector<double> J;

    //- Area of cell
    double area;

    //- Mass center of cell
    Point center;

    //- Space steps (hx, hy)
        // DELETE!
    Point step;

    std::vector<std::vector<double>> gramian;

    //- local [-1,1]x[-1,1] to global rectangular cell
    Point localToGlobal(const Point& localPoint) const;




public:

    /// geometric variables

    //- Compute hx, hy
    // DELETE!
    const Point& h() const { return step; }

    //- Number of cell
    int number;

    //- Number of entities (edges or numbers - mo matter)
    int nEntities;

    //- Edges in cell
    std::vector<std::shared_ptr<Point>> nodes;

    //- Edges in cell
    std::vector<std::shared_ptr<Edge>> edges;

    //- Return area of cell
    double getArea() const { return area; }

    //- Return center of cell
    const Point& getCellCenter() const { return center; }

    //- Calculate element area
    void setArea();

    //- Set cell center
    void setCellCenter();

    //- Define Jacobian function
    void setJacobian();

    //- Set Gauss points
    void setGaussPoints();

    //- Set basis functions
    void setBasisFunctions();

    /// RKDG variables

    //- Pointer to problem
    const Problem& problem;

    //- List of basis functions
    std::vector<std::function<double(const Point&)>> phi;

    //- Offset for basis functions
    //debug
    std::vector<double> offsetPhi;

    //- Gradient of basis functions
    std::vector<std::function<Point(const Point&)>> gradPhi;

public:

    Cell(const Problem& prb) : problem(prb) {}

    //- Construct cell using vectors of nodes and edges
    Cell(const std::vector<std::shared_ptr<Point> > &nodes, const std::vector<std::shared_ptr<Edge> > &edges, const Problem& prb);

    //- Destructor
    ~Cell() {}

    /// geometric methods

    //- Calculate coordinates of cell nodes
    std::vector<std::shared_ptr<Point>> getCellCoordinates() const;

    //- Find neighbour cells
    std::vector<std::shared_ptr<Cell>> findNeighbourCells() const ;

    //- Find neighbour cells in X direction
    //DELETE
    std::vector<std::shared_ptr<Cell>> findNeighbourCellsX() const;

    //- Find neighbour cells in Y direction
    //DELETE
    std::vector<std::shared_ptr<Cell>> findNeighbourCellsY() const;

    //- Check if point belongs cell
    bool insideCell(const Point& point) const;

    //- TODO: list of neighbour cells


    /// RKDG methods

    //- Reconstruct solution
    numvector<double, 5> reconstructSolution(const Point& point) const;
    double reconstructSolution(const Point& point, int numSol) const;
    double reconstructSolution(const std::shared_ptr<Point> point, int numSol) const
        { return reconstructSolution(*point, numSol); };

    //- Get coefficients of projection of function foo onto cell basis
    numvector<double, 5 * nShapes> projection(std::function<numvector<double,5>(const Point& point)>& init) const;

    //- Calculate Gramian matrix
    void setGramian();

    //- Solve SLAE in case of non-orthogonal functions
    numvector<double, 5 * nShapes> correctNonOrtho(const numvector<double, 5 * nShapes>& rhs) const;

    //- Calculate \int_{cell} F(U) \nabla \phi_x + G(U) \nabla \phi_y
    numvector<double, 5 * nShapes> cellIntegral();

    //- Calculate total mass flux
    double totalMassFlux() const;

    //- 2D Gauss integration of scalar function
    double integrate( const std::function<double(const Point &)>& f) const;


    //- 2D Gauss integration of vector function
    numvector<double,5> integrate( const std::function<numvector<double, 5>(const Point&)>& f) const;
    
    //- Get norm of solution for indicators
    double getNormQ(int numSol = 0) const;
};

#endif // CELL_H
