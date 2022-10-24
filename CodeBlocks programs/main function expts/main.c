/*  THINGS TO REMEMBER
    1. In C, lowercase letters are significant.
    2. main is where program execution begins.
    3. Opening and closing braces enclose
       program statements in a routine.
    4. All program statements must be
       terminated by a semmi-colon.
                                                    */

/*  ABOUT THIS PROGRAM
    In this program, I try all sorts of experiments
    with the main function. For example, what
    is the difference b/w int main(), void main(),
    int main(void), etc etc. Another thing to try
    would be - what if we return 1 or some integer
    other than 0 at the end of the main function.   */

/*  PREVIOUS PROGRAM
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 15;
    return 4;

    /***********************************************
    EXPERIMENTS WITH INT MAIN()
    return 15 - the program executes and simply
    says that process returned 15 (0xF), ie,
    the number along with its value in hexa decimal.

    Adding return 4, ie, two return lines -
    this also works. The line - return 4;
    gets ignored and the program only says
    Process returned 15 (0xF).

    Omitting the return line in int main()
    also works. The program just says
    Process returned 0 (0x0)
    ********************************************/

//  NEW PROGRAM
int main (void)
{
    // Declaring variables
    int answer, result;

    answer = 100;
    result = answer - 10;
    printf ("The result is %i\n", result + 5);

    return 0;
}
