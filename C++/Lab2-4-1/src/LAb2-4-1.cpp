//============================================================================
// Name        : Lab2-4-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bitset>
using namespace std;

int main() {
	unsigned long long n;
	int i=0;
	cout << "Input n:";
	cin >> n;

	bitset<32> bit (n);
	bitset<32> bitmask(~0);


	for(int c=1; c<=32;c++){
		if((bit&bitmask)==1){
			i++;
			bit << 1;
			bitmask << 1;

		}
		else{
			bit << 1;
			bitmask << 1;

		}
	}
	cout << i << endl;
	return 0;
}




