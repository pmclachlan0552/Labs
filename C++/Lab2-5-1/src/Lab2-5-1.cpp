//============================================================================
// Name        : Lab2-5-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,a,x,y,z;


	start:cout << "MENU" << endl
			<< "0 - exit" << endl
			<< "1 - addition" << endl
			<< "2 - subtraction" << endl
			<< "3 - multiplication" <<endl;
	cin >> n;
	switch(n){
	case 0: cout << "are you sure"<<endl;
	cout << "y(1) n(0)" << endl;
	cin >> a;
	if(a==1){
		cout << "run program to turn back on";
	}
	break;
	goto start;
	case 1:
	c1:	cout << "input # for z=y+x" << endl;
	cin >> y;
	cin >> x;
	z=y+x;
	cout << z << endl;
	cout << "return y(1)";
	cin >> a;
	if(a==1){
		goto start;
	}
	goto c1;
	break;
	case 2: cout << "3"; break;
	case 3: cout << "4"; break;
	case 4: cout << "5"; break;
	}

	return 0;
}
