#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
} // given two integers' addresses, it swaps them
// swap function has O(1) time complexity

int partition (int *a, int lo, int hi) {
    int pivot = *(a+(hi+lo)/2);
    int i = lo;
    int j = hi;

    do
        i++;
    while (*(a+i) <= pivot);

    do
        j--;
    while (*(a+j) > pivot);

    if (i >= j) {
        swap (a+i, a+j);
        return j;
    }
} // now all elements <= pivot are on its left
// partition function has O(n) time complexity

void QuickSort (int *a, int lo, int hi) { // intitally pass a, 0, n-1
    int p;
    if (lo < hi)
        p = partition (a, lo, hi);
    QuickSort (a, lo, p-1);
    QuickSort (a, p+1, hi);
} // sorted now
// QuickSort function has O(n*log(n)) time complexity

int main () {
    int i, n;
    printf ("Enter the size of the array to be sorted : ");
    scanf ("%d", &n);
    int *a = calloc (n, sizeof(int));
    printf ("Enter %d elements : ", n);
    for (i=0; i<n; i++)
        scanf ("%d", (a+i));
    QuickSort (a, 0, n-1);
    printf ("The sorted array is : \n");
    for (i=0; i<n; i++)
        printf ("%d ", *(a+i));
    return 0;
}
