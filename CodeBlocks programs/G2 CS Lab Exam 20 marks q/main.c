/*
WCP to display the following pattern up-to n rows. Assume n is odd.
   Z
  YZY
 XYZYX
WXYZYXW
 XYZYX
  YZY
   Z
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'Z';
    int n, i;
    printf("Enter numbers of rows: ");
    scanf ("%d", &n);
    while (n%2 == 0)
        {
        printf("Please enter an odd number: ");
        scanf("%d", &n);
        }

    for (i = 1; i <= n; i++)
    {

		if (i <= n/2)
            {
            int j = 0;
            for (j = 0; j <= n/2 - i; j++)
                printf(" ");
            for (j = i-1; j >= 0; j--)
                printf("%c", c-j);
            for (j = 1; j < i; j++)
                printf("%c", c-j);
            }

		else {
			int j;
			for (j = 0; j < (i-(n/2)-1); j++)
				printf(" ");
			for (j = n-i; j >= 0; j--)
				printf("%c", c-j);
			for (j = 1; j <= n-i; j++)
				printf("%c", c-j);
		}

		printf("\n");
	}
}
