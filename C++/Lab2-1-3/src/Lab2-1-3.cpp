//============================================================================
// Name        : Lab2-1-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int sys,f;
float m, ft, in;
cout << " metric(0) or imperial(1)?";
cin >> sys;

if(sys == 0){
	cout << "input meters:";
cin >> m;

in = m * 39.37008;
ft = m * 3.28084;
f = ft;
ft = f*12;
in = in - ft;

cout << f <<"'";
cout << in << "''";
}
else if(sys==1){

cout << "input feet:";
cin >> ft;
cout << "input inches:";
cin >> in;

in=in/12;
ft=ft+in;
m=ft/3.28084;

cout << m <<"m";
}
else cout << "error";
return 0;
}
