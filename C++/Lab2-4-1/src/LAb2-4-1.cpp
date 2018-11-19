//============================================================================
// Name        : Lab2-4-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned long I, O, mask;
	O=0;
	mask=1;
	cout << "Input n:";
	cin >> I;
	for(int c=32; c>0;c--){
		if((I & mask)!=0){
			O++;
		}
		mask=mask << 1;
		}
	cout << O << endl;
	return 0;
}




