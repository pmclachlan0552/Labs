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

	int Board[3][3] =
	{0,0,0,
	 0,0,0,
	 0,0,0};
	// top row
	if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 1)
		cout << "1x wins";
	if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 2)
		cout << "1o wins";

	//middle row
	if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 1)
		cout << "2x wins";
	if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 2)
		cout << "2o wins";

	//bottom row
	if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 1)
		cout << "3x wins";
	if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 2)
		cout << "3o wins";

	//1st column
	if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 1)
		cout << "4x wins";
	if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 2)
		cout << "4o wins";

	//2nd column
	if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 1)
		cout << "5x wins";
	if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 2)
		cout << "5o wins";

	//3rd column
	if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 1)
		cout << "6x wins";
	if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 2)
		cout << "6o wins";

	//diagonal 1
	if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 1)
		cout << "7x wins";
	if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 2)
		cout << "7o wins";

	//diagonal 2;
	if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 1)
		cout << "8x wins";
	if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 2)
		cout << "8o wins";
	return 0;
}

void crap(){	for (int q=0; q<9;q++){
	int p,a=0,b=0,k=0,d=0,e=0,f=0,g=0,h=0,i=0;
	cout << "input p" << endl;
	cin >> p;
	cout << endl;

	if(p==1){
		cout << "input a" << endl;
		cin >> a;}

	if(p==2){
		cout << "input b" << endl;
		cin >> b;}

	if(p==3){
		cout << "input k" << endl;
		cin >> k;}

	if(p==4){
		cout << "input e" << endl;
		cin >> d;}

	if(p==5){
		cout << "input e" << endl;
		cin >> e;}

	if(p==6){
		cout << "input f" << endl;
		cin >> f;}

	if(p==7){
		cout << "input g" << endl;
		cin >> g;}

	if(p==8){
		cout << "input h" << endl;
		cin >> h;}

	if(p==9){
		cout << "input i" << endl;
		cin >> i;}
}

