#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int     integerVar = 100;
    float   floatingVar = 331.79f;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';
    char    charVar2 = 'Anurag';
    char    charVar3 = "Anurag";
    char    charVar4 = 'Baundwal';
    char    charVar5 = 'Anurag Baundwal';
    char    charVar6 = "Anurag Baundwal";

    _Bool   boolVar = 0;

    printf ("integerVar = %5i",         integerVar);
    printf ("integerVar = %2i\n",       integerVar);
    printf ("floatingVar = %f\n",       floatingVar);
    printf ("floatingVar = %15.16f\n",  floatingVar);
    printf ("doubleVar = %12.12f\n",    doubleVar);
    printf ("doubleVar = %15.25f\n",    doubleVar);
    printf ("doubleVar = %4.3f\n",      doubleVar);
    // in the previous line we specified just 4 places before the decimal
    // however the program needed 12 places so it automatically took 12
    printf ("doubleVar = %e\n",         doubleVar);
    printf ("charVar = %c\n",           charVar);
    printf ("charVar2 = %c\n",          charVar2);
    printf ("charVar3 = %c\n",          charVar3);
    printf ("charVar4 = %c\n",          charVar4);
    printf ("charVar5 = %c\n",          charVar5);
    printf ("charVar6 = %s\n",          charVar6);

    printf ("boolVar = %i\n",           boolVar);
    printf ("boolVar = %f\n",           boolVar);

    return 0;
}
