//============================================================================
// Name        : Lab2-3-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long n,c;
	unsigned long long a;
	cout << "input n: ";
	cin >> n;
	if(n<=63){
		for(a=2,c=2;c <=n;c++){
			a=a*2;
		}

		cout << a;
	}
	else
		cout << "error";
	return 0;
}
