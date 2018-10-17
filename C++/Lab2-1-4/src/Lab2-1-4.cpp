//============================================================================
// Name        : Lab2-1-4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int yr,mo,dy,remainder;

	cout << "enter year";
	cin >> yr;
	cout <<"enter month";
	cin >> mo;
	cout << "enter day";
	cin >> dy;

	if(yr<1900 || yr > 2099){cout <<"error";}

	mo=mo-2;
	if(mo <= 0){mo=mo+12; yr=yr-1;}
	mo*=83;
	mo/=32;
	mo= mo+dy;
	mo +=yr;
	mo=mo+yr/4;
	mo=mo-yr/100;
	mo=mo+yr/400;
	remainder = mo%7;
	cout << remainder;
	return 0;
}
