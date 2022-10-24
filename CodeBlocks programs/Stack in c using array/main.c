#include <stdio.h>
#include <stdlib.h>
#define max 5

int a[max];
int top = -1;

void push(int x) {
    if (top == max - 1) {
        printf("Stack overflow.\n");
        return;
    }

    else {
        a[++top] = x;
    }
}
int main()
{
    int x;
    printf("Hello world!\n");
    printf("The maximum possible size of the stack is %d\n", max);
    printf("Currently, it has %d elements.\n", top+1);
    if (top == -1) printf("(Empty stack)\n\n");
    do {
        printf("Enter an element to push: ");
        scanf("%d", &x);
        push(x);
        printf("The stack now has %d elements.\n\n", top+1);
    } while (x != 0);
    return 0;
}
