//============================================================================
// Name        : Tic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0,
		v=0, p, x=0, y=0,
		I=0, II=0, III=0, IV=0, V=0, VI=0, VII=0, VIII=0, IX=0,
		Board[3][3]={0,0,0,0,0,0,0,0,0},
		board[3][3]={0,0,0,0,0,0,0,0,0};

string openrow = "           ||         ||           ";
string border = "  ";
string vertbar = "||";
string horbar = "  -------------------------------  ";
string slot [3] [4] = {
		"         ","         ","         ","         ",//OS
		"  ** **  ","   ***   ","   ***   ","  ** **  ",//X
		"   * *   ","  *   *  ","  *   *  ","   * *   "//O
};
void location(){

	if(p==1){
		I=x;
		a=1;}

	if(p==2){
		II=x;
		b=2;}

	if(p==3){
		III=x;
		c=3;}

	if(p==4){
		IV=x;
		d=4;}

	if(p==5){
		V=x;
		e=5;}

	if(p==6){
		VI=x;
		f=6;}

	if(p==7){
		VII=x;
		g=7;}

	if(p==8){
		VIII=x;
		h=8;}

	if(p==9){
		IX=x;
		i=9;}
}
//inputs location of symbol

void db(){

	cout << "VII"<< "|" << "VIII" << "|" << "IX" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " IV" << "|" << "  V " << "|" << "VI" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " I " << "|" << " II " << "|" << "III" << endl;
	cout << endl;
	cout << endl;

	cout << openrow << endl;
	for(int c1=0 ; c1 <3 ; c1++){
		for(int c = 0, y = 0 ; c < 4 ; c++){
			cout << border << slot[board[c1][0]][c];
			cout << vertbar << slot[board[c1][0]][c];
			cout << vertbar << slot[board[c1][0]][c] << border << endl;
			y++;}
		if(c1<2){
			cout << horbar << endl;
		}
	}
	cout << openrow << endl;
}
//draws bored at start

void ub(){
	void check();

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

		if(c%2==0){
			cout << endl << "Xs turn" << endl;
			x=1;
		}
		else {cout << endl << "Os turn" << endl;
		x=2;
		}

		cout << "input location";
		cin >> p;
		while(p < 1 || p > 9){
			cout << "location dosen't exist" << endl << "input location";
			cin >> p;
		}
		while(p==a||p==b||p==c||p==d||p==e||p==f||p==g||p==h||p==i){
			cout << "location taken"<< endl;
			cout << "input location";
			cin >> p;
			while(p < 1 || p > 9){
				cout << "location dosen't exist" << endl << "input location";
				cin >> p;
			}
		}

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

		check();
		if(v == 1)break;
	}
}
//updates bored

void check(){

	// top row
	if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 2){
		cout << "O wins";
		v=1;}

	//middle row
	if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 2){
		cout << "O wins";
		v=1;}

	//bottom row
	if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//1st column
	if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 2){
		cout << "O wins";
		v=1;}

	//2nd column
	if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 2){
		cout << "O wins";
		v=1;}

	//3rd column
	if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//diagonal 1
	if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//diagonal 2;
	if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 2){
		cout << "O wins";
		v=1;}

}
//checks for win

int main() {
	void db();
	void ub();
	db();
	ub();
	return 0;
}





