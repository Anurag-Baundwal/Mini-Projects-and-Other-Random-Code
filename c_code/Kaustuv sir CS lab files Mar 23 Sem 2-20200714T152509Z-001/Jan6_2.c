# include <stdio.h>


void printArray(int *pa, int n) {
	int *qa = pa + n;
	while (pa < qa) {
		printf("%d ", *pa++);
		//pa++;
	}
}

int sum(int *pa, int n) {
	int *qa = pa + n, sum = 0;
	while (pa < qa)
		sum += *pa++;
	return sum;
}

double avg(int *pa, int n) {
	return (double) sum(pa, n) / (double) n;
}

int find(int *pa, int n, int value) {
	int *qa = pa + n;
	while (pa < qa) {
		if (value == *pa) {
			return n - (qa - pa); 
		}
		pa++;
	}
	return -1;
}

int **allocateLowerTriangularMatrix(int m) {
	int **pM = (int **) calloc(m, sizeof(int *));
	for (int i = 0; i < n; i++) {
		pm[i] = (int *) calloc(i + 1, sizeof(int));
	}
	return pM;
}

int main() {
	int a[5] = {1, 2,  3, 4, 6};
	printArray(a, 5);
	printf("\n%d\n", find(a, 5, 4));
}
