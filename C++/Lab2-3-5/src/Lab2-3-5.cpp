//============================================================================
// Name        : Lab2-3-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
	int a;
	cout<<"input positive value greater than 1 :";
	cin >> a;
	if(a<1){
		cout <<"input is less and/or equal to 1";
	}
	else
		cout << '+';
	for(int i = 0; i < a; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < a; i++) {
		cout << '|';
		for(int j = 0; j < a; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < a; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}
