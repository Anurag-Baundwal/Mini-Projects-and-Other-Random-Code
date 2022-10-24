#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    arr[0] = 2, arr[3] = 7;
    printf("->We have declared an integer array of size 5 and initialised arr[0] = 2 and arr[3] = 7\n");
    printf("->We will now print the value as well address of each element in the array.\n");
    printf("->Printing the values lets us know what happens to uninitialised elements whereas\n  printing the addresses lets us know the size of integer variables.\n");
    printf("\n");

    for(int i=0; i<5; ++i)
    {
        printf("\tValue of arr[%d] = %d\n", i, arr[i]);
        printf("\tAddress of arr[%d] = %d\n", i, &arr[i]);
    }
    return 0;
}
