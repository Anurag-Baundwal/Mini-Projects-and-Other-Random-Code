# include <stdio.h>
# include <time.h>
# include <stdlib.h>

double arrayToDouble(char a[]) {
	int i = 0, isDigit(char c);
	double sign = 1.0, value = 0.0, power = 1.0;

	while (a[i] == ' ')
		i++;

	if (a[i] == '-') {
		sign = -1.0;
	}
	// sign = (a[i] == '-') ? -1.0 : 1.0;

	if (a[i] == '+' || a[i] == '-') {
		i++;
	}

	while (isDigit(a[i])) {
		value = value * 10 + (a[i] - '0');
		i++;
	}

	if (a[i] == '.') {
		i++;
	}

	while (isDigit(a[i])) {
		value = value * 10 + (a[i] - '0');
		i++;
		power /= 10.0;
	}

	return sign * value * power;


}

int isDigit(char c) {
	return c >= '0' && c <= '9';
}

//this will not work
void swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
	printf("INSIDE SWAP: %d %d \n", x, y);
}

void swap2(int a[]) {
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

int main() {
	//17 + 24 + 28 + 31 = 100;

	int x = 2, y = 3, temp, a[2] = {2, 3};
	int b[2][3] = {{11, 12, 13},
                   {21, 22, 23}};
	/*
	swap(x, y);
	swap2(a);
	printf("%d %d\n", x, y);

	printf("%d %d\n", a[0], a[1]);
    */
    int i, j;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("&x = %p\n", &x);
	printf("&y = %p\n", &y);
	printf("a = %p\n", a);
	printf("&a[0] = %p\n", &a[0]);
	printf("&a = %p\n", &a);

	for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%p -> %d     ", &b[i][j], b[i][j]);
        }
        printf("\n");
	}

	//printf("a = %p\n", a);
	/*
	srand(time(0));
	for (x = 0; x < 10; x++) {
		printf("%d\n", rand() % 220);
	}*/
}
