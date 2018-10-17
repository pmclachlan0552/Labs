//============================================================================
// Name        : Lab2-3-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x=0, count=0;

	while(x<=0){
		cout << "Enter x>0:";
		cin >> x;
	}
	while(x > 1){
		if(x % 2 == 0){
			x=x/2;
			count++;
			cout << x <<endl;
		}
		else if(x % 2 <= 0 || x % 2 >= 0){
			x=3*x+1;
			count++;
			cout << x <<endl;
		}
	}

	cout << "steps = " << count;
	return 0;
}
