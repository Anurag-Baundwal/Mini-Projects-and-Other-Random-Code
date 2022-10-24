#include <stdio.h>

int main(void)  // as std wants
{
    int i, j;
    for (i=0; i++, i<20; i++)
        printf ("%d ", i);
    // Output - 1 3 5 7 9 11 13 15 17 19
    return 0;       
}