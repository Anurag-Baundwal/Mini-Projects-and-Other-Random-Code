#include <stdio.h>
#include <stdlib.h>

int main () {
    int T, t, N, D, i, j, day;
    scanf ("%d", &T);
    for (t=0; t<T; t++)  {
        scanf ("%d %d", &N, &D);
        int *arr = calloc (N, sizeof (int));
        for (i=0; i<N; i++) {
            scanf ("%d", (arr+i));
        }

        j=N-1;
        day = D;
        for (i=D; i>=1; i--) {
            if (i <= day && i%*(arr+j) == 0) {
                day = i;
                i++; // test the same day again
                j--; // test the prev bus now
            }
            if (j == -1)
                break;
        }

        printf ("Case #%d: %d\n", t+1, i-1);

        // 3
        // 3 10
        // 3 7 2
        // 4 100
        // 11 10 5 50
        // 1 1
        // 1

        /* max = 0;
        flag = 1;
        int *flags = calloc (N, sizeof (int)); */

        // max starting date could be any where b/w 1 and D (both inclusive)
        // It should be a multiple of at least 1 starting date
        // And multiples of all starting dates must lie on the max
        // starting date or b/w max & D (both inclusive)

        // maxmultiple <= D of each bus date (Xi)
        // find min of these max multiples

    }
    return 0;
}
