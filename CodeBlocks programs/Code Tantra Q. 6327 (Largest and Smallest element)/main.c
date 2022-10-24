#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, largest, secondLargest, a[20];
    printf("Enter how many values you want to read : ");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        printf("Enter the value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (j=0; j<n; j++) {
        if (a[j] > largest) {
            largest = a[j];
        } else if (a[j] > secondLargest) {
        secondLargest = a[j]}
    }

    int a[20];
    return 0;
}
