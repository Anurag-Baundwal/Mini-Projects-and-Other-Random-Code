# include <stdio.h>
# include <stdlib.h>



int fact(int n) {
	int temp;
	printf("INSIDE FACT: %p -> %d\n", &n, n);
	if (n == 0) {
		return 1;
	}
	temp = n * fact(n - 1);
	if (n == 3) {
        printf("Again %d\n", n);
	}
	return temp;
}


int add(int x, int y);

/*
void stringCopy(char *s, char *t) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        t[i] = s[i];
    }
    t[i] = '\0';
}*/

void stringCopy(char *s, char *t) {
    while (*t++ = *s++)
        ;
}
/*
void stringCopy(char *s, char *t) {
    while ((*t++ = *s++) != '\0') {
        //s++;
        //t++;

    }
}*/


int global_var = 1;
static int static_var = 2;

int sub(int x, int y) {
	return x - y;
}

int operate(int x, int y, int (*f)(int, int)) {
    return f(x, y);
}

int main() {
	int n = 5, na[10], *pa = NULL, *pb = NULL, (*f)(int, int);
	char *s, t[100];
	s = "Hello, world!";
	printf("INSIDE MAIN: %p -> %d\n", &n, n);
	printf("%d\n", fact(n));

	printf("%p %p %p %p\n", fact, add, sub, main);

	printf("%p = %d, %p = %d, %p = %d\n", &n, n, &static_var, static_var, &global_var, global_var);

	pa = (int *) calloc(1, sizeof(int));
	pb = (int *) calloc(1, sizeof(int));
	printf("%p %p\n", pa, pb);

	f = add;
	printf("%d\n", f(3, 2));
	f = sub;
	printf("%d\n", f(3, 2));

	printf("%d\n", operate(3, 2, add));

	printf("%p %p %p %p %p\n", s, t, &s, &t, &f);

	stringCopy(s, t);
    printf("%s %s\n", s, t);
}

int add(int x, int y) {
	return x + y;
}
