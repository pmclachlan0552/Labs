//============================================================================
// Name        : Lab2-3-8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
 long long n,b=1;
 cout << "Input n:";
 cin >> n;
 for(int a=1;a<=n;++a){
  b*=a;
 }
cout << b;
 return 0;
}
