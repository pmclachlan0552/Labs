//============================================================================
// Name        : Lab3-10-2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

struct Collection {
	int elno;
	int *elements;
};

void AddToCollection(Collection &col, int element) {
	// Insert your code here

	if(col.elno == 0){
		col.elements = new int [1];
		col.elements[0] = element;
		col.elno++;
	}
	else{
		int *A = new int [col.elno + 1];
		for(int c =0 ; c < (col.elno) ; c++){
			A[c]= col.elements[c];
		}
		A[col.elno] = element;
		col.elno++;
		delete [] col.elements;
		col.elements = A;
	}

}

void PrintCollection(Collection col) {
	cout << "[ ";
	for(int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {
	Collection collection = { 0, NULL };
	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));

	for(int i = 0; i < elems; i++){
		AddToCollection(collection, rand() % 100 + 1);
	PrintCollection(collection);}
	delete[] collection.elements;
	return 0;
}
