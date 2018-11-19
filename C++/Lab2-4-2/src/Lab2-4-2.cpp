//============================================================================
// Name        : Lab2-4-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;


int main(void) {

	unsigned short n, mI=1, mII=1,m1,m2;
	bool ispalindrome = true;
	cout << "value = ";
	cin >> n;

	mII = mII << 15;

	for(int i = 0 ; i < 8 ; i++){
		m1 = mI & n;
		m2 = mII & n;
		if((m1 == 0 && m2 != 0)||(m1 != 0 && m2 == 0)){
			ispalindrome= false;
			break;
		}
		m1 = m1 << 1;
		m2 = m2 >> 1;
	}

	if(ispalindrome == true)
		cout << n << " is a bitwise palindrome" << endl;
	else
		cout << n << " is not a bitwise palindrome" << endl;

	return 0;
}

