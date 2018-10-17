//============================================================================
// Name        : Lab2-1-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float grossprice, taxrate, netprice, taxvalue;


	cout << "Enter a gross price:";
	cin >> grossprice;
	cout << "Enter tax rate:";
	cin >> taxrate;

	if(grossprice > 0 && taxrate > 0 && taxrate < 100){

		netprice = grossprice / (1 + taxrate / 100);
	taxvalue = netprice  * (taxrate / 100);
}
	else cout << "error";

	cout << "Net price :" << netprice << endl;
	cout << "Tax value:" << taxvalue << endl;
	return 0;
}
