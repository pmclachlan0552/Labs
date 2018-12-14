//============================================================================
// Name        : Tic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
using namespace std;
int a=0, b=0, k=0, d=0, e=0, f=0, g=0, h=0, i=0, v=0, p, x=0, y=0, t=0,
		I=0, II=0, III=0, IV=0, V=0, VI=0, VII=0, VIII=0, IX=0,
		mode,Board[3][3]={0,0,0,0,0,0,0,0,0};

string openrow = "           ||         ||           ";
string border = "  ";
string vertbar = "||";
string horbar = "  -------------------------------  ";
string slot [3] [4] = {
		"         ","         ","         ","         ",//OS
		"  ** **  ","   ***   ","   ***   ","  ** **  ",//X
		"   * *   ","  *   *  ","  *   *  ","   * *   "//O
};

void SmartCom(int c){
	int q=0;
	//---------------------------------------------------------------------------------------------------------------//
	if(c==0){


		srand(time(NULL));
		int s = rand()%3;
		switch(s){
		case 0:
			p = 1;
			break;
		case 1:
			p=3;
			break;
		case 2:
			p=7;
			break;
		case 3:
			p=9;
			break;
		}
	}
	//---------------------------------------------------------------------------------------------------------------//
	if(c==2){

		do{
			srand(time(NULL));
			int s = rand()%3;
			switch(s){
			case 0:
				if(Board[2][0] != 1 && Board[2][1] !=2){
					p = 1;
					++q;
				}
				else{ q = 0;}
				break;
			case 1:
				if(Board[2][2] != 1 && Board[2][2] !=2){
					p=3;
					++q;
				}
				else{ q = 0;}
				break;
			case 2:
				if(Board[0][0] != 1 && Board[0][0] !=2){
					p=7;
					++q;
				}
				else{ q = 0;}
				break;
			case 3:
				if(Board[0][2] != 1 && Board[0][2] !=2){
					p=9;
					++q;
				}
				else{ q = 0;}
				break;
			}
		}while(q==0);
	}
	//---------------------------------------------------------------------------------------------------------------//
	if(c==4){

		//offensive
		cout << "offensive";
		//top row
		if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 0){p = 9;}
		else if(Board[0][1] == 1 && Board[0][2] == 1 && Board[0][0] == 0){p = 7;}
		else if(Board[0][0] == 1 && Board[0][2] == 1 && Board[0][1] == 0){p = 8;}
		//middle row
		if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 0){p = 6;}
		else if(Board[1][1] == 1 && Board[1][2] == 1 && Board[1][0] == 0){p = 4;}
		else if(Board[1][0] == 1 && Board[1][2] == 1 && Board[1][1] == 0){p = 5;}
		//bottom row
		if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 0){p = 3;}
		else if(Board[2][1] == 1 && Board[2][2] == 1 && Board[2][0] == 0){p = 1;}
		else if(Board[2][0] == 1 && Board[2][2] == 1 && Board[2][1] == 0){p = 2;}
		//1st column
		if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 0){p = 1;}
		else if(Board[1][0] == 1 && Board[2][0] == 1 && Board[0][0] == 0){p = 7;}
		else if(Board[0][0] == 1 && Board[2][0] == 1 && Board[1][0] == 0){p = 4;}
		//2nd column
		if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 0){p = 2;}
		else if(Board[1][1] == 1 && Board[2][1] == 1 && Board[0][1] == 0){p = 8;}
		else if(Board[0][1] == 1 && Board[2][1] == 1 && Board[1][1] == 0){p = 5;}
		//3rd column
		if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 0){p = 3;}
		else if(Board[1][2] == 1 && Board[2][2] == 1 && Board[0][2] == 0){p = 9;}
		else if(Board[0][2] == 1 && Board[2][2] == 1 && Board[1][2] == 0){p = 6;}
		//1st diagonal
		if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 0){p = 3;}
		else if(Board[1][1] == 1 && Board[2][2] == 1 && Board[0][0] == 0){p = 7;}
		else if(Board[0][0] == 1 && Board[2][2] == 1 && Board[1][1] == 0){p = 5;}
		//2nd diagonal
		if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 0){p = 1;}
		else if(Board[1][1] == 1 && Board[2][0] == 1 && Board[0][2] == 0){p = 9;}
		else if(Board[0][2] == 1 && Board[2][0] == 1 && Board[1][1] == 0){p = 5;}

		//defense
		cout << "defensive";
		//top row
		if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 0){p = 9;}
		else if(Board[0][1] == 2 && Board[0][2] == 2 && Board[0][0] == 0){p = 7;}
		else if(Board[0][0] == 2 && Board[0][2] == 2 && Board[0][1] == 0){p = 8;}
		//middle row
		if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 0){p = 6;}
		else if(Board[1][1] == 2 && Board[1][2] == 2 && Board[1][0] == 0){p = 4;}
		else if(Board[1][0] == 2 && Board[1][2] == 2 && Board[1][1] == 0){p = 5;}
		//bottom row
		if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 0){p = 3;}
		else if(Board[2][1] == 2 && Board[2][2] == 2 && Board[2][0] == 0){p = 1;}
		else if(Board[2][0] == 2 && Board[2][2] == 2 && Board[2][1] == 0){p = 2;}
		//1st column
		if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 0){p = 1;}
		else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[0][0] == 0){p = 7;}
		else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[1][0] == 0){p = 4;}
		//2nd column
		if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 0){p = 2;}
		else if(Board[1][1] == 2 && Board[2][1] == 2 && Board[0][1] == 0){p = 8;}
		else if(Board[0][1] == 2 && Board[2][1] == 2 && Board[1][1] == 0){p = 5;}
		//3rd column
		if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 0){p = 3;}
		else if(Board[1][2] == 2 && Board[2][2] == 2 && Board[0][2] == 0){p = 9;}
		else if(Board[0][2] == 2 && Board[2][2] == 2 && Board[1][2] == 0){p = 6;}
		//1st diagonal
		if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 0){p = 3;}
		else if(Board[1][1] == 2 && Board[2][2] == 2 && Board[0][0] == 0){p = 7;}
		else if(Board[0][0] == 2 && Board[2][2] == 2 && Board[1][1] == 0){p = 5;}
		//2nd diagonal
		if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 0){p = 1;}
		else if(Board[1][1] == 2 && Board[2][0] == 2 && Board[0][2] == 0){p = 9;}
		else if(Board[0][2] == 2 && Board[2][0] == 2 && Board[1][1] == 0){p = 5;}



		//---------------------------------------------------------------------------------------------------------------//
		if(c==6){
			//offensive
			cout << "offensive";
			//top row
			if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][1] == 1 && Board[0][2] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[0][2] == 1 && Board[0][1] == 0){p = 8;}
			//middle row
			if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 0){p = 6;}
			else if(Board[1][1] == 1 && Board[1][2] == 1 && Board[1][0] == 0){p = 4;}
			else if(Board[1][0] == 1 && Board[1][2] == 1 && Board[1][1] == 0){p = 5;}
			//bottom row
			if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[2][1] == 1 && Board[2][2] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[2][0] == 1 && Board[2][2] == 1 && Board[2][1] == 0){p = 2;}
			//1st column
			if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[1][0] == 1 && Board[2][0] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[2][0] == 1 && Board[1][0] != 2){p = 4;}// this one
			//2nd column
			if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 0){p = 2;}
			else if(Board[1][1] == 1 && Board[2][1] == 1 && Board[0][1] == 0){p = 8;}
			else if(Board[0][1] == 1 && Board[2][1] == 1 && Board[1][1] == 0){p = 5;}
			//3rd column
			if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[1][2] == 1 && Board[2][2] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 1 && Board[2][2] == 1 && Board[1][2] == 0){p = 6;}
			//1st diagonal
			if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[1][1] == 1 && Board[2][2] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[2][2] == 1 && Board[1][1] == 0){p = 5;}
			//2nd diagonal
			if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[1][1] == 1 && Board[2][0] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 1 && Board[2][0] == 1 && Board[1][1] == 0){p = 5;}

			//defense
			cout << "defensive";
			//top row
			if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][1] == 2 && Board[0][2] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 2 && Board[0][2] == 2 && Board[0][1] == 0){p = 8;}
			//middle row
			if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 0){p = 6;}
			else if(Board[1][1] == 2 && Board[1][2] == 2 && Board[1][0] == 0){p = 4;}
			else if(Board[1][0] == 2 && Board[1][2] == 2 && Board[1][1] == 0){p = 5;}
			//bottom row
			if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[2][1] == 2 && Board[2][2] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[2][0] == 2 && Board[2][2] == 2 && Board[2][1] == 0){p = 2;}
			//1st column
			if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[1][0] == 0){p = 4;}
			//2nd column
			if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 0){p = 2;}
			else if(Board[1][1] == 2 && Board[2][1] == 2 && Board[0][1] == 0){p = 8;}
			else if(Board[0][1] == 2 && Board[2][1] == 2 && Board[1][1] == 0){p = 5;}
			//3rd column
			if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[1][2] == 2 && Board[2][2] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 2 && Board[2][2] == 2 && Board[1][2] == 0){p = 6;}
			//1st diagonal
			if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[1][1] == 2 && Board[2][2] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 2 && Board[2][2] == 2 && Board[1][1] == 0){p = 5;}
			//2nd diagonal
			if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[1][1] == 2 && Board[2][0] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 2 && Board[2][0] == 2 && Board[1][1] == 0){p = 5;}

		}
		//---------------------------------------------------------------------------------------------------------------//
		if(c==8){
			//offensive
			cout << "offensive";
			//top row
			if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][1] == 1 && Board[0][2] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[0][2] == 1 && Board[0][1] == 0){p = 8;}
			//middle row
			if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 0){p = 6;}
			else if(Board[1][1] == 1 && Board[1][2] == 1 && Board[1][0] == 0){p = 4;}
			else if(Board[1][0] == 1 && Board[1][2] == 1 && Board[1][1] == 0){p = 5;}
			//bottom row
			if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[2][1] == 1 && Board[2][2] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[2][0] == 1 && Board[2][2] == 1 && Board[2][1] == 0){p = 2;}
			//1st column
			if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[1][0] == 1 && Board[2][0] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[2][0] == 1 && Board[1][0] == 0){p = 4;}
			//2nd column
			if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 0){p = 2;}
			else if(Board[1][1] == 1 && Board[2][1] == 1 && Board[0][1] == 0){p = 8;}
			else if(Board[0][1] == 1 && Board[2][1] == 1 && Board[1][1] == 0){p = 5;}
			//3rd column
			if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[1][2] == 1 && Board[2][2] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 1 && Board[2][2] == 1 && Board[1][2] == 0){p = 6;}
			//1st diagonal
			if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 0){p = 3;}
			else if(Board[1][1] == 1 && Board[2][2] == 1 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 1 && Board[2][2] == 1 && Board[1][1] == 0){p = 5;}
			//2nd diagonal
			if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 0){p = 1;}
			else if(Board[1][1] == 1 && Board[2][0] == 1 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 1 && Board[2][0] == 1 && Board[1][1] == 0){p = 5;}

			//defense
			cout << "defensive";
			//top row
			if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][1] == 2 && Board[0][2] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 2 && Board[0][2] == 2 && Board[0][1] == 0){p = 8;}
			//middle row
			if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 0){p = 6;}
			else if(Board[1][1] == 2 && Board[1][2] == 2 && Board[1][0] == 0){p = 4;}
			else if(Board[1][0] == 2 && Board[1][2] == 2 && Board[1][1] == 0){p = 5;}
			//bottom row
			if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[2][1] == 2 && Board[2][2] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[2][0] == 2 && Board[2][2] == 2 && Board[2][1] == 0){p = 2;}
			//1st column
			if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[1][0] == 2 && Board[2][0] == 2 && Board[1][0] == 0){p = 4;}
			//2nd column
			if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 0){p = 2;}
			else if(Board[1][1] == 2 && Board[2][1] == 2 && Board[0][1] == 0){p = 8;}
			else if(Board[0][1] == 2 && Board[2][1] == 2 && Board[1][1] == 0){p = 5;}
			//3rd column
			if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[1][2] == 2 && Board[2][2] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 2 && Board[2][2] == 2 && Board[1][2] == 0){p = 6;}
			//1st diagonal
			if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 0){p = 3;}
			else if(Board[1][1] == 2 && Board[2][2] == 2 && Board[0][0] == 0){p = 7;}
			else if(Board[0][0] == 2 && Board[2][2] == 2 && Board[1][1] == 0){p = 5;}
			//2nd diagonal
			if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 0){p = 1;}
			else if(Board[1][1] == 2 && Board[2][0] == 2 && Board[0][2] == 0){p = 9;}
			else if(Board[0][2] == 2 && Board[2][0] == 2 && Board[1][1] == 0){p = 5;}

		}
	}
}
// ^ the smart AI

void Mode(int c){
	if(c==0){
		cout << "PvP = 1" << endl << "PvC = 2" << endl << "PvSC = In testing" << endl;
		cin >> mode;
	}
	switch(mode){

	case 1:{
		if(c%2==0){
			cout << endl << "Xs turn" << endl;
			x=1;
		}
		else {cout << endl << "Os turn" << endl;
		x=2;
		}

		cout << "input location";
		cin >> p;
		cout << endl;
		while(p < 1 || p > 9){
			cout << "location dosen't exist" << endl << "input location";
			cin >> p;
			cout << endl;
		}
		while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
			cout << "location taken"<< endl;
			cout << "input location";
			cin >> p;
			cout << endl;
			while(p < 1 || p > 9){
				cout << "location dosen't exist" << endl << "input location";
				cin >> p;
				cout << endl;
			}
		}
		break;
	}
	case 2:{
		if(c%2==0){
			cout << endl << "Xs turn" << endl;
			x=1;
			while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
				srand (time(NULL));
				p = ((rand() % 9)+1);
				cout << p;
			}
		}
		else {cout << endl << "Os turn" << endl << "input location ";
		x=2;
		}

		cout << endl;
		while(p < 1 || p > 9){

			cout << "location dosen't exist" << endl << "input location";
			cin >> p;
			cout << endl;
		}
		while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
			if(c%2 !=1){
				cout << "location taken"<< endl << "input location";
			}

			cin >> p;
			cout << endl;
			while(p < 1 || p > 9){
				cout << "location dosen't exist" << endl << "input location";
				cin >> p;
				cout << endl;
			}
		}
		break;
	}
	case 3:{
		if(t==0){
			cout << "Make the first move?"<< endl;
			cout << "Yes(1)  No(2)" << endl;
			cin >> t;
		}
		//player goes first
		if(t==1){
			if(c%2==0){cout << endl << "Os turn" << endl << "input location ";
			x=2;


			cout << endl;
			while(p < 1 || p > 9){

				cout << "location dosen't exist" << endl << "input location";
				cin >> p;
				cout << endl;
			}
			while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
				if(c%2 !=1){
					cout << "location taken"<< endl << "input location";
				}

				cin >> p;
				cout << endl;
				while(p < 1 || p > 9){
					cout << "location dosen't exist" << endl << "input location";
					cin >> p;
					cout << endl;
				}
			}
			}
			else {cout << endl << "Xs turn" << endl;
			x=1;
			SmartCom(c);
			cout << p;
			while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
				SmartCom(c);
			}
			}
		}
		//Scom goes  first
		if(t==2){
			if(c%2==0){
				cout << endl << "Xs turn" << endl;
				x=1;
				SmartCom(c);
				cout << p;
				//				while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
				//					SmartCom(c);
				//				}
			}
			else {cout << endl << "Os turn" << endl << "input location ";
			x=2;
			}

			cout << endl;
			while(p < 1 || p > 9){

				cout << "location dosen't exist" << endl << "input location";
				cin >> p;
				cout << endl;
			}
			while(p==a||p==b||p==k||p==d||p==e||p==f||p==g||p==h||p==i){
				if(c%2 !=1){
					cout << "location taken"<< endl << "input location";
				}

				cin >> p;
				cout << endl;
				while(p < 1 || p > 9){
					cout << "location dosen't exist" << endl << "input location";
					cin >> p;
					cout << endl;
				}
			}
		}
		break;
	}
	}
}
// ^ selects game mode

void location(){

	if(p==1){ I=x;
	a=1;}

	if(p==2){ II=x;
	b=2;}

	if(p==3){ III=x;
	k=3;}

	if(p==4){ IV=x;
	d=4;}

	if(p==5){ V=x;
	e=5;}

	if(p==6){ VI=x;
	f=6;}

	if(p==7){ VII=x;
	g=7;}

	if(p==8){ VIII=x;
	h=8;}

	if(p==9){ IX=x;
	i=9;}
}
// ^ inputs location of symbol

void db(){

	cout << "VII"<< "|" << "VIII" << "|" << "IX" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " IV" << "|" << "  V " << "|" << "VI" << endl;
	cout << "---"<< "|" << "----" << "|" << "---" << endl;
	cout << " I " << "|" << " II " << "|" << "III" << endl;
	cout << endl;

	cout << openrow << endl;
	for(int c1=0 ; c1 <3 ; c1++){
		for(int c = 0, y = 0 ; c < 4 ; c++){
			cout << border << slot[Board[c1][0]][c];
			cout << vertbar << slot[Board[c1][0]][c];
			cout << vertbar << slot[Board[c1][0]][c] << border << endl;
			y++;}
		if(c1<2){
			cout << horbar << endl;
		}
	}
	cout << openrow << endl;
}
// ^ draws bored at start

void ub(){
	void check();
	void Mode(int c);
	for(int c = 0 ; c < 9 ; c++){

		Mode(c);

		location();

		Board[0][0] = VII;
		Board[0][1] = VIII;	 //top row
		Board[0][2] = IX;

		Board[1][0] = IV;
		Board[1][1] = V;	 //middle row
		Board[1][2] = VI;

		Board[2][0] = I;
		Board[2][1] = II;    //bottom row
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
			cout << vertbar << slot[VIII][c];  // updates top row
			cout << vertbar << slot[IX][c] << border << endl;}

		cout << horbar << endl;

		for(int c = 0 ; c < 4 ; c++){
			cout << border << slot[IV][c];
			cout << vertbar << slot[V][c];  // updates middle row
			cout << vertbar << slot[VI][c] << border << endl;}

		cout << horbar << endl;

		for(int c = 0 ; c < 4 ; c++){
			cout << border << slot[I][c];
			cout << vertbar << slot[II][c];  // updates bottom row
			cout << vertbar << slot[III][c] << border << endl;}
		cout << openrow << endl;

		check();
		if(v == 1)break;
		if (c==8)cout << "Draw";
	}
}
// ^ updates bored

void check(){

	//checks top row
	if(Board[0][0] == 1 && Board[0][1] == 1 && Board[0][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[0][1] == 2 && Board[0][2] == 2){
		cout << "O wins";
		v=1;}

	//checks middle row
	if(Board[1][0] == 1 && Board[1][1] == 1 && Board[1][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[1][0] == 2 && Board[1][1] == 2 && Board[1][2] == 2){
		cout << "O wins";
		v=1;}

	//checks bottom row
	if(Board[2][0] == 1 && Board[2][1] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[2][0] == 2 && Board[2][1] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//checks 1st column
	if(Board[0][0] == 1 && Board[1][0] == 1 && Board[2][0] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[1][0] == 2 && Board[2][0] == 2){
		cout << "O wins";
		v=1;}

	//checks 2nd column
	if(Board[0][1] == 1 && Board[1][1] == 1 && Board[2][1] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][1] == 2 && Board[1][1] == 2 && Board[2][1] == 2){
		cout << "O wins";
		v=1;}

	//checks 3rd column
	if(Board[0][2] == 1 && Board[1][2] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][2] == 2 && Board[1][2] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//checks diagonal 1
	if(Board[0][0] == 1 && Board[1][1] == 1 && Board[2][2] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][0] == 2 && Board[1][1] == 2 && Board[2][2] == 2){
		cout << "O wins";
		v=1;}

	//checks diagonal 2;
	if(Board[0][2] == 1 && Board[1][1] == 1 && Board[2][0] == 1){
		cout << "X wins";
		v=1;}
	if(Board[0][2] == 2 && Board[1][1] == 2 && Board[2][0] == 2){
		cout << "O wins";
		v=1;}
}
// ^ checks for winning conditions

int main() {
	void db();
	void ub();
	db();
	ub();
	return 0;
}
