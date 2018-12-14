//============================================================================
// Name        : Lab3-4-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Date {
int year;
int month;
int day;
};

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

int dayOfYear(Date date) {
int numDays = 0;
//check input
if(date.month < 1 || date.month > 12){
	return 0;
}
if(date.day <1 || date.day > monthLength(date.year,date.month)){
	return 0;
}

for(int c = 1 ; c < date.month ; c++){
	numDays += monthLength(date.year, c );
}

numDays+=date.day;
return numDays;
}

int main(void) {
Date d;
cout << "Enter year month day: ";
cin >> d.year >> d.month >> d.day;
cout << dayOfYear(d) << endl;
return 0;
}
