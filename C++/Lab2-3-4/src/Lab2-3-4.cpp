//============================================================================
// Name        : Lab2-3-4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double n,a,b,c;
	cout << "input n: ";
	cin>>n;
	for(a=2,b=2,c=0;c<=n;c++){
		a=a/b;
	}
	cout.precision(20);
cout << a;

	return 0;
}
