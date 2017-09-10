/*
*
* File for common types, functions, and classes of the project.
*
* Added by: Gaoli Chen 09/10/2017
*
*/

#pragma once
#include <complex>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <Eigen/Dense>
using namespace std;

// the infinitesimal number epsilon
#define EPS 1e-10

// the base type used in the project, all the decimal numbers should be declared as DT.
typedef double DT;

// the complex type built based on the base type DT.
typedef complex<DT> CT;

// type for 3 * 3 matrix.
typedef Eigen::Matrix<CT, 3, 3, 0, 3, 3> Matrix33;

// The constant Pi.
extern DT Pi;

// gets random number of type DT between min and max.
DT dRand(DT min = 0.0, DT max = 1.0);

// gets random complex numbers. 
CT cRand(DT maxNorm = 1.0);

// set the number to zero if abs(number) < EPS
inline DT chop(DT n) {
	if (abs(n) < EPS) return 0.0;
	return n;
}

inline CT chop(CT n) {
	return CT(chop(n.real()), chop(n.imag()));
}