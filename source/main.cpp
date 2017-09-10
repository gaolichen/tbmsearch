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
	cout << "Random matrix: " << endl << rm1 << endl;
	cout << "\teigenvalues: " << endl << rm1.eigenvalues() << endl << endl;

	Matrix33 rm2 = randHermitianMatrix();
	cout << "Random Hermitian Matrix: " << endl << rm2 << endl;
	Matrix33::EigenvaluesReturnType ev = rm2.eigenvalues();
	cout << "\teigenvalues: " << endl << rm2.eigenvalues() << endl << endl;
	return 0;
}
