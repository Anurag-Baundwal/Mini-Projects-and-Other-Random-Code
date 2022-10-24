#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    printf ("%d\n", arr);       // address of the first element (1) of the array
                                // or, the base address of the array
    printf ("%d\n", &arr[0]);   // same as above
    printf ("%d\n\n", *arr);      // gives the first element of the array

    int *x = malloc (5*sizeof (int));
    *x = 1;
    *(x+1) = 2;
    *(x+2) = 3;
    *(x+3) = 4;
    *(x+4) = 5;
    printf ("%d\n", x);        // address of the first element (1) of the array
                               // or, the base address of the array
    printf ("%d\n", &*(x+0));  // same as above
    printf ("%d\n\n", *x);     // gives the first element of the array
    return 0;
}