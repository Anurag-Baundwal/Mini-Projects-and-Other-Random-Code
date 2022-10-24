# include <stdio.h>

# define SIZE 1000

static void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void selectionSort(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[minIndex] > a[j]) {
                minIndex = j;
            }
        }
        swap(&a[i], &a[minIndex]);
    }
}

//1 2 3 4 5 , i = 0, j = 0, flag = 0, n = 5

void bubbleSort(int *a, int n) {
    int flag = 1;
    for (int i = 0; flag && i < n - 1; i++) {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
    }
}


int search(int *pa, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (pa[i] == element) {
            return i;
        }
    }
    return -1;
}


/*13 22 56 61 79 80 82 99
0  1   2  3  4  5  6  7
l         m  l        h  m = (l+h)/2; */

int binarySearch(int *pa, int size, int element) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (pa[mid] > element) {
            high = mid - 1;
        } else if (pa[mid] < element) {
            low = mid + 1;
        } else {
            // pa[mid] == element
            return mid;
        }
    }
    return -1;
}

static int recursiveBinarySearchHelper(int *pa, int low, int high, int element) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (pa[mid] == element) {
        return mid;
    } else if (pa[mid] > element) {
        return recursiveBinarySearchHelper(pa, low, mid - 1, element);
    } else {
        return recursiveBinarySearchHelper(pa, mid + 1, high, element);
    }
}

int recursiveBinarySearch(int *pa, int size, int element) {
    return recursiveBinarySearchHelper(pa, 0, size - 1, element);
}

static void merge(int *pa, int *ptemp, int low, int high, int highEnd) {
    int lowEnd = high - 1, l = low, h = high, t = low;
    while (l <= lowEnd && h <= highEnd) {
        if (pa[l] > pa[h]) {
            ptemp[t++] = pa[h++];
        } else {
            ptemp[t++] = pa[l++];
        }
    }
    while (l <= lowEnd) {
        ptemp[t++] = pa[l++];
    }
    while (h <= highEnd) {
        ptemp[t++] = pa[h++];
    }
    for (t = low; t <= highEnd; t++) {
        pa[t] = ptemp[t];
    }
}

static void mergeSortHelper(int *pa, int *ptemp, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSortHelper(pa, ptemp, low, mid);
        mergeSortHelper(pa, ptemp, mid + 1, high);
        merge(pa, ptemp, low, mid + 1, high);
    }
}

void mergeSort(int *pa, int n) {
    int *ptemp = (int *) calloc(n, sizeof(int));
    mergeSortHelper(pa, ptemp, 0, n - 1);
    free(ptemp);
}

static void printArray(int *pa, int low, int high) {
    for (int l = low; l <= high; l++) {
        printf("%d ", pa[l]);
    }
    printf("\n");
}

static int partition(int *pa, int low, int high) {
    int pivot = pa[(low + high) / 2];
    printf("partition: low: %d  high:%d  pivot: %d pivot index: %d\n", low, high, pivot, (low + high)/2);
    printArray(pa, low, high);
    int l = low - 1, h = high + 1;
    while (1) {
        while (pa[++l] < pivot)
            ;
        while (pa[--h] > pivot)
            ;
        if (l >= h) {
            printArray(pa, low, high);
            printf("=======================\n");
            return h;
        }
        swap(&pa[l], &pa[h]);
        printf("l:%d  h:%d\n", l, h);
        printArray(pa, low, high);
    }
}

static void quickSortHelper(int *pa, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(pa, low, high);
        printf("Pivot index: %d  Pivot: %d\n", pivotIndex, pa[pivotIndex]);
        quickSortHelper(pa, low, pivotIndex);
        quickSortHelper(pa, pivotIndex + 1, high);
    }
}

void quickSort(int *pa, int n) {
    quickSortHelper(pa, 0, n - 1);
}

int main() {
    int n = 8;
    int a[SIZE] = {23, 14, 56, 19, 10, 17, 18, 13};
    quickSort(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    /*
    for (int i = -1; i < n + 1; i++) {
        printf("%d is present at %d.\n", a[i], recursiveBinarySearchHelper(a, 0, n - 1, a[i]));
    }
    */
    return 0;
}


