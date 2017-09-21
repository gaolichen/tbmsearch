#include<iostream>
#include "common.h"
#include <Eigen/Eigenvalues>
using namespace std;

Matrix33 randHermitianMatrix() {
	Matrix33 ma;
	for (int i = 0; i < 3; i++) {
		for (int j = i; j < 3; j++) {
			if (i == j) {
				ma(i, j) = dRand();
			} else{
				ma(i, j) = cRand(1.0);
				ma(j, i) = conj(ma(i, j));
			}
		}
	}

	return ma;
}

int main() {
	Matrix33 rm1 = Matrix33::Random();
	cout << "Random matrix A: " << endl << rm1 << endl;
	cout << "Eigenvalues of A: " << endl << rm1.eigenvalues() << endl;
	Eigen::ComplexEigenSolver<Matrix33> es1(rm1);
	cout << "Eigenvectors of A: " << endl << es1.eigenvectors() << endl << endl;

	Matrix33 rm2 = randHermitianMatrix();
	cout << "Random Hermitian Matrix B: " << endl << rm2 << endl;
	cout << "Eigenvalues of B: " << endl << rm2.eigenvalues() << endl;
	Eigen::ComplexEigenSolver<Matrix33> es2(rm2);
	cout << "Eigenvectors of B: " << endl << es2.eigenvectors() << endl << endl;

	Eigen::Matrix3d rm3 = Eigen::Matrix3d::Random();
	cout << "Real random matrix C: " << endl << rm3 << endl;
	cout << "Eigenvalues of C: " << endl << rm3.eigenvalues() << endl;
	Eigen::EigenSolver<Eigen::Matrix3d> es3(rm3);
	cout << "Eigenvectors of C: " << endl << es3.eigenvectors() << endl << endl;
	cout << "demo test" << endl;
	return 0;
}
