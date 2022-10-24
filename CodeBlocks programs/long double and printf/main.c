#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 5.32e-5;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%lf can be written %le\n", dip, dip);

    // the third printf line is not working properly
    return 0;
}
