//============================================================================
// Name        : Lab2-11-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct TIME{
	int hour;
	int minute;
	int minute1;
}time;

int main() {

	cout << "hour =";
	cin >> time.hour;
	cout << "minute 1 =";
	cin >> time.minute;
	cout << "minute 2 =";
	cin >> time.minute1;

	time.minute = time.minute + time.minute1;
	while(time.minute >= 60){
		time.minute = time.minute - 60;
		time.hour++;
	}

	while(time.hour >= 24){
		time.hour = time.hour - 24;
	}
	if(time.hour < 10){
		cout << "0" << time.hour << ":";
	}
	else cout << time.hour << ":";

	if(time.minute < 10){
		cout << "0" << time.minute;
	}
	else cout << time.minute;

	return 0;
}
