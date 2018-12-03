//============================================================================
// Name        : Lab3-4-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

bool isLeap(int year) {
	bool retval = false;
	if(year%4==0)
	retval = true;
return retval;
}

int main(void) {
	for(int yr = 1995; yr < 2017; yr++)
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;
}
