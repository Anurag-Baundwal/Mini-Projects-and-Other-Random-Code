#include <stdio.h>
#include <stdlib.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element

	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


int main () {
    int t, T, N, B;
    scanf ("%d", &T);
    for (t=0; t<T; t++) {
        scanf ("%d %d", &N, &B);
        int arr[N];

        int i;
        for (i=0; i<N; i++)
            scanf ("%d", &arr[i]);

		// To check whether the array is being scanned properly or not:
		/* printf ("The scanned array is : ");
		for (i=0; i<N; i++)
			printf ("%d ", arr[i]);
		printf ("\n"); */

        quickSort(arr, 0, N-1);

		// To check the sorting:
		/* printf ("The sorted array is : ");
		for (i=0; i<N; i++)
			printf ("%d ", arr[i]);
		printf ("\n"); */

        int sum = 0;
        int count = 0;
        for (i=0; i<N; i++) {
            if (arr[i] + sum <= B) {
                sum += arr[i];
                count++;
            }
        }

        printf ("Case #%d: %d\n", t+1, count);
    }

    return 0;
}
