//============================================================================
// Name        : Lab2-3-6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
 int n;
 cout <<"Input h(2<=h<=9)";
 cin >> n;
 if(n < 2 || n > 9){
  cout <<"error # not between 2 & 9 ";
 }
 else
 for(int h=n;h>0;h--){ //sets up height of pyramids
  for(int c=0;c<3;c++){//# of pyramids
   if(h>=n){
    for(int b=(h-1);b>0;b--){cout << " ";}
    cout << "*" ;       //# of spaces before & after *
    for(int b=(h-1);b>-1;b--){cout << " ";}
   }
   if(h!=n){
    if(h>1){
     for(int b=(h-1);b>0;b--){cout << " ";}
     cout << "*";
     for( int b=2*(n-h)-1;b>=1;b--){cout << " ";} //# of _ before,between, after *
     cout << "*";
     for(int b=h;b>0;b--){cout << " ";}
    }
   }
   if(h==1){
    for(int b=0;b<(n*2)-1;b++){cout << "*";} // # of * for bottom layer
    cout << " "; //# of spaces between bottom layer
   }
  }cout << endl;
 }
 return 0;
}











