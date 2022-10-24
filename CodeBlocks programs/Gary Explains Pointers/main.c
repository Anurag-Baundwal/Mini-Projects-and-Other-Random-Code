#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7;
    printf ("x = 7\n");
    printf ("%d\n", x);
    printf ("The address of x using &x is : %x\n", &x);
    int *aptr = &x;
    printf ("The address of x using pointers is : %x\n", aptr);
    printf ("The value of x using pointers is : %d\n", *aptr);
    printf ("An incorrect value of x using pointers is : %d\n", *(aptr+2));
    return 0;
}
