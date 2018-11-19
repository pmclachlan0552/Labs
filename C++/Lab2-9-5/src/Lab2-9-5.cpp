//============================================================================
// Name        : Lab2-9-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {

	double matrix[][4] = {
			{ 1, 2, 3, 4 },
			{ 2, 2, 3, 1 },
			{ 3, 3, 3, 2 },
			{ 4, 1, 2, 4 } };
	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	int area = sizeof(matrix) / sizeof(matrix[0][0]);
	bool issymmetric = true;

	if(area/side!=side)
		issymmetric=false;

	for(int c=0 ; c < side ; c++){
		for(int t=0 ; t < side ; t++){
			if(matrix[c][t] != matrix[t][c]){
				issymmetric = false;
				break;
			}
		}
	}

	if(issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
	return 0;
}
