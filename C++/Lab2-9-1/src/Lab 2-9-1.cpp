//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
	int aux;
	int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
	int vector2[7];

	for(int c = 0; c < 7; c++){
		aux = vector1[c];
		vector2[0]=vector1[7];
		vector2[c+1]= aux;
	}
	for(int i = 0; i < 7; i++)
		cout << vector2[i] << ' ';
	cout << endl;
	return 0;
}
