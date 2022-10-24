/*
#include <stdio.h>
#include <stdlib.h>

void main()
{
    double num   = 123.4567890;
    double num_  = 1.4e-4;
    printf("%d\n", num);
    printf("%e\n", num);
    printf("%.12f\n", num);
    printf("%g\n", num);
    printf("%d\n", num_);
    printf("%e\n", num_);
    printf("%f\n", num_);
    printf("%g\n", num_);

    _Bool boolVar_a = 0;
    _Bool boolVar_b = 1;
    printf("boolVar_a = %i\n", boolVar_a);
    printf("boolVar_b = %i\n", boolVar_b);
}
*/

// C program to demonstrate the difference
// between %i and %d specifier
#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Enter value of a in decimal format:");
	scanf("%d", &a);

	printf("Enter value of b in octal format: ");
	scanf("%i", &b);

	printf("Enter value of c in hexadecimal format: ");
	scanf("%i", &c);

	printf("a = %i, b = %i, c = %i", a, b, c);

	return 0;
}


