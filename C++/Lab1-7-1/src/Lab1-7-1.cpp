//============================================================================
// Name        : Lab1-7-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float a,b,c,d,e;
cout << "input a";
	cin >> a;
cout << "input b";
	cin >> b;
cout << "input c";
	cin >> c;
cout << "input d";
		cin >> d;
cout << "input e";
	cin >> e;


cout << setprecision(2) << "a=" << a << endl;
cout << setprecision(2) << fixed << "b=" << b <<endl;
cout << setprecision(6) << "c=" << c << endl;
cout << setprecision(2) << "d=" << d << endl;
cout << setprecision(0) << "e=" << e << endl;
	return 0;
}
