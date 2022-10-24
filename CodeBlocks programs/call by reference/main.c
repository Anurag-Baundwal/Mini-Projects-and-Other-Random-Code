#include <stdio.h>
#include <stdlib.h>

int main ()
{
    void Increment(int*);
    int a = 15;
    Increment(&a); // use &a, not a -> the type of argument is pointer
    printf("a = %d\n", a);
    return 0;
}

void Increment (int* A)
{
    *A = (*A)+1;
}

/**********************
 int Increment (int a)
{
    a = a+1;
    return a;
}
int main()
{
    int a;
    a = 10;
    Increment(a); // a = a+1;
    printf("a = %d", Increment(a));
    return 0;
} ********************/
