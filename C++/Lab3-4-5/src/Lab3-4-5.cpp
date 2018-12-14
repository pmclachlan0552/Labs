//============================================================================
// Name        : Lab3-4-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
Date date;
	time_t t = time(NULL);
	tm tl = *localtime(&t);
	date.year = tl.tm_year+=1900;
	date.month = tl.tm_mon+=1;
	date.day=tl.tm_mday+=1;
return date;
}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}
