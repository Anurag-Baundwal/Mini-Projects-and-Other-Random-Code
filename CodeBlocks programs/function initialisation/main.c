#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool equalStrings (); // Function Declaration - no need to write the arguments

    // Declaring and initialising our variables
    char string1[] = "anurag";
    char string2[] = "anurag";
    char string3[] = "baundwal";

    /* part 1 */    if (equalStrings(string1, string2))     printf ("The given strings \"%s\" and \"%s\" are equal.\n", string1, string2);
                    else                                    printf ("The given strings \"%s\" and \"%s\" are unequal.\n", string1, string2);
    /* part 2 */                if (equalStrings(string3, string2))     printf ("The given strings \"%s\" and \"%s\" are equal.\n", string3, string2);
                    else                                    printf ("The given strings \"%s\" and \"%s\" are unequal.\n", string3, string2);

    return 0;
} // scroll down to see the function

// take two strings as arguments of the function
// compare them character by character and keep proceeding until there is a mismatch or end of either string is reached
// if the value of i so obtained indicates the end of BOTH the strings, then they are equal

// Function Initialisation
bool equalStrings (char str1[], char str2[])
{
    int i=1;
    while (str1[i] == str2[i] && str1[i] != 0 && str2[i] != 0)      i++;
    if (str1[i] == '\0' && str2[i] == '\0')     return true;
    else    return false;
} // function completed
