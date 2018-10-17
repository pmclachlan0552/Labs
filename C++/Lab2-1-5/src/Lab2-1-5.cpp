//============================================================================
// Name        : Lab2-1-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int yr,a,b,c,d,e,f,g;
cout << "input year from 20th or 21st century:";
	cin >> yr;
	if(yr<1900 || yr > 2099){cout <<"error";}
	a=yr%19;
	b=yr%4;
	c=yr%7;
	d=((a*19)+24)%30;
	e=((2*b)+(4*c)+(6*d)+5)%7;
	f=e+d;
	if(f<10){g=d+e+22;cout << "March" << g;}
	else if(f>=10){g=d+e-9;cout << "April" << " " << g;}


	return 0;
}
