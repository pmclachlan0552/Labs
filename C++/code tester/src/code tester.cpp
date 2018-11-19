//============================================================================
// Name        : code.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Board[3][3] =
	{0,0,0,
	 0,0,0,
   	 0,0,0};

int p, I=0, II=0, III=0,
		IV=0, V=0, VI=0,
		VII=0, VIII=0, IX=0;

void location(){
	if(p==1){
			cout << "input a" << endl;
			cin >> I;}

		if(p==2){
			cout << "input b" << endl;
			cin >> II;}

		if(p==3){
			cout << "input k" << endl;
			cin >> III;}

		if(p==4){
			cout << "input e" << endl;
			cin >> IV;}

		if(p==5){
			cout << "input e" << endl;
			cin >> V;}

		if(p==6){
			cout << "input f" << endl;
			cin >> VI;}

		if(p==7){
			cout << "input g" << endl;
			cin >> VII;}

		if(p==8){
			cout << "input h" << endl;
			cin >> VIII;}

		if(p==9){
			cout << "input i" << endl;
			cin >> IX;}
}

void ub(){
	string openrow = "           ||         ||           ";
		string border = "  ";
		string vertbar = "||";
		string horbar = "  -------------------------------  ";
		string slot [3] [4] = {
				"         ","         ","         ","         ",//OS
				"  ** **  ","   ***   ","   ***   ","  ** **  ",//X
				"   * *   ","  *   *  ","  *   *  ","   * *   "//O
		};

		for(int c = 0 ; c < 9 ; c++){

			cout << "input p";
			cin >> p;
			location();

			Board[0][0] = VII;
				Board[0][1] = VIII;
				Board[0][2] = IX;

				Board[1][0] = IV;
				Board[1][1] = V;
				Board[1][2] = VI;

				Board[2][0] = I;
				Board[2][1] = II;
				Board[2][2] =III;

		for(int c1=0, x=0;c1<3;c1++){
			for(int c=0, y=0 ; c<3 ; c++){
				cout << Board[x][y] << " ";
				y++;
			}
			cout << endl;
			x++;
		}

		cout << "VII"<< "|" << "VIII" << "|" << "IX" << endl;
		cout << "---"<< "|" << "----" << "|" << "---" << endl;
		cout << " IV" << "|" << "  V " << "|" << "VI" << endl;
		cout << "---"<< "|" << "----" << "|" << "---" << endl;
		cout << " I " << "|" << " II " << "|" << "III" << endl;
		cout << endl;

		cout << openrow << endl;

		for(int c = 0 ; c < 4 ; c++){
			cout << border << slot[VII][c];
			cout << vertbar << slot[VIII][c];
			cout << vertbar << slot[IX][c] << border << endl;}

		cout << horbar << endl;

		for(int c = 0 ; c < 4 ; c++){
			cout << border << slot[IV][c];
			cout << vertbar << slot[V][c];
			cout << vertbar << slot[VI][c] << border << endl;}

		cout << horbar << endl;

		for(int c = 0 ; c < 4 ; c++){
			cout << border << slot[I][c];
			cout << vertbar << slot[II][c];
			cout << vertbar << slot[III][c] << border << endl;}
		cout << openrow << endl;

	}
	}





int main() {

	void location();

	string openrow = "           ||         ||           ";
	string border = "  ";
	string vertbar = "||";
	string horbar = "  -------------------------------  ";
	string slot [3] [4] = {
			"         ","         ","         ","         ",//OS
			"  ** **  ","   ***   ","   ***   ","  ** **  ",//X
			"   * *   ","  *   *  ","  *   *  ","   * *   "//O
	};

	for(int c = 0 ; c < 9 ; c++){

		cout << "input p";
		cin >> p;
		location();

		Board[0][0] = VII;
			Board[0][1] = VIII;
			Board[0][2] = IX;

			Board[1][0] = IV;
			Board[1][1] = V;
			Board[1][2] = VI;

			Board[2][0] = I;
			Board[2][1] = II;
			Board[2][2] =III;

	for(int c1=0, x=0;c1<3;c1++){
		for(int c=0, y=0 ; c<3 ; c++){
			cout << Board[x][y] << " ";
			y++;
		}
		cout << endl;
		x++;
	}

	cout << "VII"<< "|" << "VIII" << "|" << "IX" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " IV" << "|" << "  V " << "|" << "VI" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " I " << "|" << " II " << "|" << "III" << endl;
	cout << endl;

	cout << openrow << endl;

	for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[VII][c];
		cout << vertbar << slot[VIII][c];
		cout << vertbar << slot[IX][c] << border << endl;}

	cout << horbar << endl;

	for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[IV][c];
		cout << vertbar << slot[V][c];
		cout << vertbar << slot[VI][c] << border << endl;}

	cout << horbar << endl;

	for(int c = 0 ; c < 4 ; c++){
		cout << border << slot[I][c];
		cout << vertbar << slot[II][c];
		cout << vertbar << slot[III][c] << border << endl;}
	cout << openrow << endl;

}

	return 0;
}
