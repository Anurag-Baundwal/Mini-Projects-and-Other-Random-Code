#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, product = 1, average, number;
    printf("Please enter how numbers you want to take the product of:\n");
    scanf("%d", &num);
    printf("Please enter some numbers:\n");

    for(int i = 1; i <= num; i++)
    {
        scanf("%d", &number);
        product *= number;
    }

    printf("%d", product);

    // return 0;
}


