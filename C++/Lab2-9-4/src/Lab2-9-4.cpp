//============================================================================
// Name        : Lab2-9-4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double am = 0;
	double hm = 0;
	double gm = 1;
	double rms = 0;

	for(int c = 0 ; c < n ; c ++){
		am=am+vector[c];
	}
	am = am/n;

	for(int c = 0 ; c < n ; c++){
		hm = hm + 1. / vector[c];
	}
hm = n / hm;

for(int c = 0 ; c < n ; c++){
		gm = gm * vector[c];
	}
gm = pow(gm,1./n);

	for(int c = 0 ; c < n ; c++)
		rms += vector[c]*vector[c];
	rms=rms/n;
	rms=sqrt(rms);

	cout << "Arithmetic Mean = " << am << endl;
	cout << "Harmonic Mean = " << hm << endl;
	cout << "Geometric Mean = " << gm << endl;
	cout << "RootMean Square = " << rms << endl;
	cout << endl;
	return 0;
}
