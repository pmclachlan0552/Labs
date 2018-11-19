//============================================================================
// Name        : Tic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int c = 0 ; c < 3 ; c++){
		for(int c = 0 ; c < 4 ; c++){
			for(int c = 0 ; c < 11 ; c++){
				cout << " ";}
			cout << "||";
			for(int c = 0 ; c < 9 ; c++){
				cout << " ";}
			cout << "||";
			for(int c = 0 ; c < 11 ; c++){
				cout << " ";}
			cout << endl;}
		if(c == 2){
			break;}
		for(int c = 0 ; c < 2 ; c++){
			cout << " ";}
		for(int c = 0 ; c < 34 ; c++){
			cout << "-";}
		for(int c = 0 ; c < 2 ; c++){
			cout << " ";}
		cout << endl;
	}



	return 0;
}
