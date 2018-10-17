//============================================================================
// Name        : Lab2-1-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "enter a year";
	cin >> year;

	if(year<1582){
		cout <<"year is before the Gregorian calender was established." << endl;
	}
	else{
		if(year % 4 != 0){
			cout << "it is a common year";
		}

		else{
			 if(year % 100 != 0){
				 cout << "it is a leap year";
			 }
			 else{
				 if(year % 400 != 0){
					 cout << "it is a common year";
				 }
				 else cout << "it is a leap year";
	return 0;
			 }
		}
	}
}
