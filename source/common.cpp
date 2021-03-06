#include "common.h"

DT Pi = acos(-1.0);

DT dRand(DT min, DT max) {
	double f = (DT)rand() / RAND_MAX;
    return min + f * (max - min);
}

CT cRand(DT maxNorm) {
	// for uniform distribution, the propability of large norm complex is larger than small norm complex.
	DT norm = sqrt(dRand(0, maxNorm * maxNorm));
	DT arg = 2 * Pi * dRand();
	return CT(norm * cos(arg), norm * sin(arg));
}