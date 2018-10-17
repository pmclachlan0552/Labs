//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int main() {
bool answer;
int value;

cout << "enter a value";
cin >> value;

if(    (value >= 0 && value < 10)
|| (value * 2 < 20 && value - 2 > -2)
|| (value - 1 > 1 && value / 2 < 10 )
|| (value == 111 )){ answer = true;
}else answer = false;

cout << (answer ? "that's true :)" : "that's not true :(") << endl;

  return 0;
}

