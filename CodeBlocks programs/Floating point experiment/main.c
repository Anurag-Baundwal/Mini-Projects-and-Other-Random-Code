// FLOATING POINT EXPERIMENT

#include <stdio.h>
#include <stdlib.h>

main()
{
    int i = 1234567890;
    float x = 345.678;
    float y = 345678.901234;

    printf("%3d %5d %8d\n\n", i, i, i);
    printf("%3f %10f %13f\n\n", x, x, x);
    printf("%0.3f %0.5f %0.8\n\n", x, x, x);
    printf("%3f %10f %13f\n\n", y, y, y);
    printf("%0.3f %0.5f %0.8\n\n", y, y, y);
    printf("%3e %5e %8e\n\n", x, x, x);

}
