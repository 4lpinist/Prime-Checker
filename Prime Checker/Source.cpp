/*	PRIME NUMBER CHECKER 
	EVALUATES WHETHER A NUMBER IS PRIME OR COMPOSITE AND DETERMINES ITS PRIME FACTORS */

#include <iostream>
#include <math.h>

using namespace std;

int i, p=0, q, numtype, M;
int primeFactor[10];

int primechecker( int N) {		// Determines whether a number is prime

	int a, j, k=0; 

	for (a = 1; a <= N; a++) {
		j = N % a;
		if (j == 0)
			k++;
	}
	if (k < 3)
		return 1;
	else
		return 0;
}

int main() {

	cout << "Prime number checker.\n\n\Enter a number greater than 1:" << endl;
	cin >> M;

	numtype = primechecker(M);			

	if (numtype == 1)
		cout << "Number is prime" << endl;
	else
	{
		for (i = 1; i <= M; i++) {
			numtype = primechecker(i);
			q = M % i;

			if (numtype == 1 && q==0) {				//  Determines whether number is both prime and factor
				primeFactor[p] = i;					//  Adds prime factor to array if conditions are met
				p++;
			}
		}

	
	cout << "Number is composite. There are " << p << " prime factors:" << endl;

	for (i = 0; i < p; i++)
		cout << primeFactor[i] << endl;
	}
	
	return 0;
}