#include <stdio.h>
#include <stdlib.h>

// float absoluteValue (float);
float absoluteValue (float x)
{
     if (x<0) x=-x;
     return x;
}

// float SquareRoot (float );
float SquareRoot (float x)
{
    const float     epsilon = .00000000000000000001;
    float           guess   = 1;

    while (absoluteValue(guess*guess - x) >= epsilon)
        guess = (x/guess + guess)/2.0;

    return guess;
}
int main()
{
    printf ("SquareRoot (2.0) = %f\n", SquareRoot (2.0));
    printf ("SquareRoot (144.0) = %f\n", SquareRoot (144.0));
    printf ("SquareRoot (17.5) = %f\n", SquareRoot (17.5));
    // float num;
    // printf ("Enter the number whose square root you want : ");
    // scanf ("%f", &num);
    // printf ("Approximate square root of %f by Newton Raphson method is : %f\n", num, SquareRoot(num));
    return 0;
}
