//============================================================================
// Name        : Lab3-10-1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
	int maxball;
	int ballsno;
	int *aux, *balls;

	cout << "Max ball number? ";
	cin >> maxball;
	cout << "How many balls? ";
	cin >> ballsno;
	srand(time(NULL));


	aux =   new int;
	balls = new int [ballsno];

	for(int i=1; i <(ballsno+1); i++){
		Start :
		*aux=rand()%maxball+1;

		for(int a=0; a<i; a++){
			if(*aux==balls[a])
				goto Start;
			if(a==(i-1)){
				balls[a]=*aux;
				cout << balls[a] << endl;
			}
		}
	}


	delete []balls;
	delete aux;

	return 0;
}


