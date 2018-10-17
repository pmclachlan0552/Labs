//============================================================================
// Name        : Lab2-3-7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
	long long n,a,b=0,c=1,e;
	cout << "input n-th term:";
	cin >> n;
	for(a=0;a < n;a++){
		if(a<=1){
			b=a;
		}
		else{
			e=b+c;
			b=c;
			c=e;
		}
	}
	cout << c <<endl;
	return 0;
}

