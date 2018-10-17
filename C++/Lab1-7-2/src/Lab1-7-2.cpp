//============================================================================
// Name        : Lab1-7-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x,y;
	float a,b,c;
	cout << "input x";
	cin >> x;
	cout << "input y";
	cin >> y;
a=x;
b=y;
a = 1 / a;
b = 1 / b;

c = fabs(a-b);


if( c<=0.000001 )cout <<"results are equal (by 0.000001 epsilon)";
else cout << "results are not equal (by 0.000001 epsilon)";
	return 0;
}
