//============================================================================
// Name        : Lab2-11-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct 	START{
	int H,M;
}start;



struct END{
	int h,m;
}endx;

int main() {

	//struct END end;

	cout << "start time";
	cin >> start.H;
	cin >> start.M;
	cout << "end time";
	cin >> endx.h;
	cin >> endx.m;

endx.h =	endx.h - start.H;
endx.m = endx.m - start.M;

while(endx.m < 0){
endx.m = 60 + endx.m;
endx.h--;
}

if(endx.h < 10)
	cout << "0" << endx.h << ":";
else cout << endx.h << ":";

if(endx.m <10)
	cout << "0" << endx.m;
else cout << endx.m;

	return 0;
}
