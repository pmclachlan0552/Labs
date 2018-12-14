#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(void) {
	int maxball;
	int ballsno;
int *arr;
	cout << "Max ball number? " << endl;
	cin >> maxball;
	cout << "How many balls? " << endl;
	cin >> ballsno;

	arr = new int [ballsno];

	for(int c = 0 ; c < ballsno ; c++){
		bool unique = true;
		srand(time(NULL));
		int rnd = 0;

		do{
			unique = true;
			srand(time(NULL));
			rnd = ((rand() % maxball)+1);
			arr[c] = rnd;
			for(int j = 0 ; j >= c ; j++){
				if(rnd == arr[c]){
					unique = false;
					break;
				}
				cout << rnd;
			}
		}while(unique == false);
		delete[] arr;
	}
	return 0;
}

