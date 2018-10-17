//============================================================================
// Name        : Lab1-4-1b.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;
int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "enter value of x";
cin >> x;


y=
(
    (x*x)
    /
    (
     (pi*pi)
      *
     (
      (x*x)+(.5)
     )
    )
);

y=y*(1+
     (
      (x*x)
      /
       (
        (pi*pi)
        *
        (
         (
          (x*x)-(.5)
         )
        *
         (
          (x*x)-(.5)
         )
        )
       )
     )
    );
cout << "y = " << y;
return 0;
}
