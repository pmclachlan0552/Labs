//============================================================================
// Name        : TTT.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int board[3][3]={0,0,0,0,0,0,0,0,0};

	string openrow = "           ||         ||           ";
	string border = "  ";
	string vertbar = "||";
	string horbar = "  -------------------------------  ";
	string slot [3] [4] = {
			"         ","         ","         ","         ",//OS
			"  ** **  ","   ***   ","   ***   ","  ** **  ",//X
			"   * *   ","  *   *  ","  *   *  ","   * *   "//O
	};

	cout << openrow << endl;

	for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[1][c];
		cout << vertbar << slot[2][c];
		cout << vertbar << slot[0][c] << border << endl;
		}
cout << horbar << endl;
for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[0][c];
		cout << vertbar << slot[2][c];
		cout << vertbar << slot[0][c] << border << endl;
		}
cout << horbar << endl;
for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[1][c];
		cout << vertbar << slot[2][c];
		cout << vertbar << slot[1][c] << border << endl;
		}
cout << openrow << endl;


return 0;
}
