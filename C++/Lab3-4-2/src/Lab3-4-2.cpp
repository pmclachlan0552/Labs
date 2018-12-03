//============================================================================
// Name        : Lab3-4-2.cpp
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

int monthLength(int year, int month) {
	int retval = 0;

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		retval = 31;
		break;

	case 2:

		if(isLeap(year)){
			retval = 29;
		}
		else retval = 28;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		retval = 30;
		break;
	}

	return retval;
}

int main(void) {
	for(int yr = 2000; yr < 2002; yr++) {
		for(int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr,mo) << " ";
		cout << endl;
	}
	return 0;
}
