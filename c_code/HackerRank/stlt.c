#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area (triangle tri) {
    printf ("tri.a = %d\n", tri.a);
    double quo = (tri.a + tri.b + tri.c)/2.0;
    double p = quo;
    printf ("p =  %e\n", p);
    double a_sq = p * (p-tri.a) * (p-tri.b) * (p-tri.c);
    return a_sq;
}

/* int area (int x, int y, int z) {
    int p = (x+y+z)/2;
    int a_sq = p * (p-x) * (p-y) * (p-z);
    int a = pow (a_sq, 0.5);
    return a;
} */

void swap (triangle *xp, triangle *yp)
{
    triangle temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_by_area(triangle* tr, int n) {
	// tr is the name of array of triangle structures
    // tr[2].b -- this way we can access side b of triangle no. 3
    int i, j;
    for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (area(tr[j]) > area(tr[j+1]))
                swap(&tr[j], &tr[j+1]);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
    printf ("\n");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d       %d\n", tr[i].a, tr[i].b, tr[i].c, area(tr[i]));
	}
	return 0;
}
