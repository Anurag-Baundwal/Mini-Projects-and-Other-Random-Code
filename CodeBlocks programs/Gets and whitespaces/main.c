#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    gets(str);
    printf("The length of the string is : %d\n", strlen(str));
    printf("%d", sizeof(str));
    return 0;
}
