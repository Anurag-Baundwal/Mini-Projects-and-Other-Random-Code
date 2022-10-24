#include <stdio.h>
#include <stdlib.h>

int main () {
    int t, T, N, i, count;
    scanf ("%d", &T);

    for (t=0; t<T; t++) {
        scanf ("%d", &N);
        int arr[N];
        for (i=0; i<N; i++)
            scanf ("%d", &arr[i]);

        count = 0;
        for (i=1; i<N-1; i++) {
            if (arr[i] > arr[i-1]  && arr[i] > arr[i+1]) {
                count++;
                i++;
            }
        }

        printf ("Case #%d: %d\n", t+1, count);
    }

    return 0;
}
