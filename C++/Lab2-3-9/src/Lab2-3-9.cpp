//============================================================================
// Name        : Lab2-3-9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	long long a=1, b=4;
	cout << "Input an odd #:";
	cin >> n;
	if(n%2==0){
		cout << "Must be an odd number";
	}
for(int c=1; c < n; c+=2){
	a=(a+b);
    b=b+8;
}
cout << a;
	return 0;
}
