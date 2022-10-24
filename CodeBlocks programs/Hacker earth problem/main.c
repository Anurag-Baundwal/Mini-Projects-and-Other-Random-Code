/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

int main () {
    int T, i, N, seat, block, fSeat;

    scanf("%d", &T);
    for (i=1; i<=T; i++) {
        scanf("%d", &N);
        block = N/12;


        if (N%12 != 0)
            {seat = N%12;}          // shifts all seats to block no. 0
        else {seat = N - 12*block;} // when N is a multiple of 12


        int add = 11;
        for (int count=1; count <= 12; count++)
        {
            if (seat == count)
            {
                fSeat = N+add;
                if (seat == 1 || seat == 6)
                    printf("%d WS\n", fSeat);
                else if (seat == 2 || seat == 5)
                    printf("%d MS\n", fSeat);
                else if (seat == 3 || seat == 4)
                    printf("%d AS\n", fSeat);
                add = add - 2;
            }
        }
    }
    return 0;
}
