#include <stdio.h>
#include <stdlib.h>

int main () {
    
    printf("Running 5\n");
    int T=0, key;
    scanf("%d", &T);
printf("Running scanf\n");
    int *arr = (int *)calloc(T, sizeof(int));
printf("Running array allocation\n");    
for(int i=0; i<T; i++) {
        scanf("%d", key);
        *(arr+i) += key;
    }
    
    printf("Running 12\n");
    int Q;
    scanf("%d", &Q);
    int* targets = (int *)calloc(Q, sizeof(int));
    for(int i=0; i<Q; i++)
        scanf("%d", targets+i);
    
    printf("Running 19\n");
    int i=0, j=0, flag;
    for(i=0; i<Q; i++) {
        flag = 0;
        for(j=0; j<T; j++) {
            if (*(arr+j) > *(targets+i)) {
                printf("%d\n", j+1);
                flag=1;
                break;
            }
            if (flag == 0) printf("-1\n");
        }
    }
    
    return 0;
}   