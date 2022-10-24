# include <stdio.h>

void *getPC() {
	return __builtin_return_address(0);
}

void printArray(int *pa, int n) {
	int *qa = pa + n;
	while (pa < qa) {
		printf("%d ", *pa++);
		//pa++;
	}
	printf("\n");
}

void insertionSort(int *pa, int n) {
	int i = 0, j = 0, key = 0;
	for (i = 1; i < n; i++) {
		key = pa[i];
		j = i - 1;
		while (j >= 0 && pa[j] > key) {
			pa[j + 1] = pa[j];
			j--;
		}
		pa[j + 1] = key;
	}
}


int main() {
	int a = 6, b = 7, c = 8, pa[5] = {5, 4, 3, 2, 1}, n = 5;
	printf("%p\n", main);
	a++;
	printf("%p\n", getPC());
	b--;
	printf("%p\n", getPC());
	c = a + b;
	printArray(pa, n);
	insertionSort(pa, n);
	printArray(pa, n);
}
