//============================================================================
// Name        : Lab2-3-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double pi4 = 0., b, c;
	long n, a;

	cout << "number of iterations? ";
	cin >> n;

	for(b=1,c=1,a=0;a != n; a++){
pi4=pi4+(c/b);
c=c*-1;
b=b+2;
	}

	cout.precision(20);
	cout << "Pi = " << (pi4*4.) << endl;
	return 0;
}
