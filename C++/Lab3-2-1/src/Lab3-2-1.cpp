//============================================================================
// Name        : Lab3-2-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

	int idxSmallest = 0;
int *p = vector;

	for (int icompare = idxSmallest + 1; icompare < n; icompare++)
	{
		if( *(p + icompare) < *(p + idxSmallest))
		{
			idxSmallest = icompare;
		}
	}
cout << *(p + idxSmallest) << endl;






return 0;
}
