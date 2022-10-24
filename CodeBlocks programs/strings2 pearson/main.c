#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10], s2[10], s3[10];
    printf("Enter text:\n");
    scanf("%s%s%s", s1, s2, s3);
    printf("\ns1 = %9s s2 = %9s\ns3 = %9s", s1, s2, s3);

    return 0;
}
