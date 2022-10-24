/*
Let d(n) be defined as the sum of proper divisors of n(numbers less than n which divide evenly into n).
If  d(a) = b and d(b) = a, where a != b, then a and b are an amicable pair and each of a and b are called amicable numbers.
For example. the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110; therefore d(220) = 284.
The proper divisors of 284 are 1, 2, 4, 71, and 142; so d(284) = 220.
WCP to find all such amicable numbers within 100.
(Repeat the same for 1000).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_d(int);

int main()
{

    int ul = 1000,t1,t2, a, i, j, d_a = 0, d_b = 0;
    _Bool

    printf("amicable numbers between 1 to %d are \n",ul);


    for(i = 1; i <= ul; i++)
    {
       t1=sum_d(i);
       t2=sum_d(t1);

       if(t2==i)
       {
           printf("\n%d and %d",i,t1);
           ifami=1;
       }

    }

    if(ifami)
    printf("\nSucess :-\) ");
    else
    printf("No amicable numbers found till %d \n",ul);

     /*   if(ul%i == 0)
        {
            a = i;
            d_a += i;

            for(j = 1; j <= d_a; j++)
                {
                    if(d_a%j == 0)
                    d_b += j;
                    if (d_b == d_a)
                    printf("%d and %d are amicable numbers", a, d_a);
                }
        }

        */

printf("\n");

return 0;
}


int sum_d(int a)
{
    int i, sum=0;

    for(i=1; i<a; i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
return sum;
}
