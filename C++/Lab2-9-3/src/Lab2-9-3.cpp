//============================================================================
// Name        : Lab2-9-3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main(void) {
int vector[] = {1, 7, 3, 8, 3, 7, 1};
bool ispalindrome = true;
int n = sizeof(vector) / sizeof(vector[0]);
for(int c = 0, x = 6 ; c < n ; c++,x--){
if(vector[c]!=vector[x])
	ispalindrome=false;
}
if(ispalindrome)
cout << "It's a palindrome";
else
cout << "It isn't a palindrome";
cout << endl;
return 0;
}
