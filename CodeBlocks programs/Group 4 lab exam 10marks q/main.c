/*
WCP to accept a series of non-negative integers.
The numbers are terminated by -1.
Find the range of this series of numbers.
The range of a series of numbers is the difference between the largest and the smallest number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, num_1, num_2, max_num = 0, min_num = 0;
    printf("Please enter some whole numbers:\n");
    scanf("%d", &num);
    for (int i = 1; num != -1; i++)
    {
        if (i == 1)
        {
            min_num = num;
            max_num = num;
        }
        if (num == -1)
            break;
        if (num != -1)
        {
            if(num < min_num)
                min_num = num;
            if (num > max_num)
                max_num = num;
        }
        scanf("%d", &num);

    }

    printf("Range of the series of numbers is %d", max_num - min_num);
    return 0;
}
