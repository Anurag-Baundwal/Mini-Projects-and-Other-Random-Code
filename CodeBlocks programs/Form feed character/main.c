/*
    This program is an experiment to see how the whitespace characters \f
    (the form feed character) and \r work. URL -
    https://iiitg.codetantra.com/secure/
    notes.jsp?cid=5d426da04950694bfaab7a13&tid=5d426da04950694bfaab7a40&bd=ANTY1X2N0X2No&rja=false
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello \f\r\n world!\n");
    printf("My name \v is Anurag.\n");
    printf("%d\n", 0xAB); // AB rocks boiii !!

    int x = 0xAB;
    printf("%05d", x);
    return 0;
    // Looks like \r prints the words following it on a new page.
    // \r\n seems to work a little differently, though.
}

/*  TOKENS

    The basic building blocks used to write a C program are called tokens.
    In C, tokens can be classified into six categories as given below:

    1. Identifiers -
        These are simple names used to refer to or identify something. For example,
        names of variables, functions are called identifiers.
    2. Keywords -
        These are one of the 32 reserved words like int, for, if etc. These words have special
        meaning when used as part of the program.
    3. Constants -
        These are fixed values like 10, 20, etc, which are used in a program.
    4. String constants -
        String constants are specified within double quotations. Example:
        "Total", "CodeTantra", etc.
    5. Separators -
        The following are called as separators:
        ( ) {} [] ; , .
    6. Operators -
        The following are called operators:
        - = > < == >=
*/
