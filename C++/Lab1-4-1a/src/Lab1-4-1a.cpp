//============================================================================
// Name        : Lab1-4-1a.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>
using namespace std;
int main()
{
int i, j, k;
std::cout <<"enter i" ;
std::cin >> i;
std::cout << "enter j";
std::cin >> j;

/*i=100;
j=3;*/

i+=2;// increment i by 2
j-=i;// decrement j by i
k=i/j;// divide i by j giving k
k+=k;// increment k by k
k=k-1;// decrement k by 1
j=k%i;// assign k modulo i to j
k=k+k+i;// increment k by k added to i
k+=k/j;// increment k by k divided by j
k=k*k*k;// assign k times k times k to k
k+=i*j;// increment k by i times j
std::cout << k;
return 0;
}
