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

do{
	start:cout << "MENU" << endl
			<< "0 - exit" << endl
			<< "1 - addition" << endl
			<< "2 - subtraction" << endl
			<< "3 - multiplication" << endl
			<< "4 - Division" << endl;
	cin >> n;
	switch(n){

	//exit
	case 0: cout << "are you sure"<<endl;
	cout << "y(1) n(0)" << endl;
	cin >> a;
	if(a==1){
		cout << "run program to turn back on";
	break;}
	goto start;
	break;

	//addition
	case 1:
		cout << "input x & y" << endl;
		cin >> x;
		cin >> y;
		z=y+x;
		cout << z << endl;

		break;
		//subtraction
	case 2:
		cout << "input x & y" << endl;
		cin >> x;
		cin >> y;
		z=y-x;
		cout << z << endl;
		break;
		//multiplication
	case 3:
		cout << "input x & y" << endl;
		cin >> x;
		cin >> y;
		z=y*x;
		cout << z << endl;
		break;
		//division
	case 4:
		cout << "input x & y" << endl;
		cin >> x;
		cin >> y;
		if(x != 0){
			z=y/x;
			cout << z << endl;
		break;
		}
		cout << "error" << endl;
		break;
	}
}while(n!=0);



	return 0;
}
