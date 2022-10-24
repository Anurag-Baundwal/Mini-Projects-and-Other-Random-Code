#include <stdio.h>
#include <stdlib.h>

int main() {
	/* // your code goes here
	int T, G, N, I, Q;

	while (T--) {
	    scanf ("%d", &G);
	    while (G--) {
	        scanf ("%d %d %d", &I, &N, &Q); // I=1 means all heads 
	        printf ("%d %d %d\n", I, N , Q);
	        if (N%2 == 0)
	            printf ("%d\n", N/2);
	       
	        else if (N%2 == 1) {
	            if ((I == 1 && Q == 1) || (I == 2 && Q == 2))
	                printf ("%d\n", N/2);

	            else
	                printf ("%d\n", N/2 + 1);
	        }
	    }
	    // coins will be flipped N times
	    // in kth round, all coins numbered less than or equal to k get flipped
	    // Q = 1 need to find number of heads after N rounds
	    // Q = 2 need to find number of tails after N rounds
	} */

	union address {
		int a[2];
		char c;
	} x;

	x.c = 'T';
	x.a[0] = 67;
	printf("%d, %d", &x.c, &x.a[0]);
	return 0;
}