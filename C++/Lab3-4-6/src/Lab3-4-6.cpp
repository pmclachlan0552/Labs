//============================================================================
// Name        : Lab3-4-6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
	bool itisprime = true;
if(num >= 2 ){
	int ulim = int (sqrt(num));
	for(int i = 2 ; i <= ulim ; i++){
		if (isPrime(i)){
			if(num % i == 0){
				itisprime=false;
			}
		}
	}
}
else { itisprime = false;}

	return itisprime;
}
int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}
