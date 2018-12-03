//============================================================================
// Name        : Lab3-2-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(void) {
	int matrix[10][10] = { };

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
*(*(matrix+i) + j) = (i + 1) * (j + 1);
		}
	}

	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}
