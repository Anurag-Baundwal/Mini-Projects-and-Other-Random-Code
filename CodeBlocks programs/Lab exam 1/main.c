/*
Write a program to find the total no. of votes in favor of persons 'A' and 'B'.
Assume 100 voters will be casting their votes to these persons.
Count the no. of votes gained by 'A' and 'B'.
User can enter his/her choices by pressing 'A' or 'B'.
User should be able to check partial result by pressing 'R' and end voting by pressing 'E'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int votes_A = 0, votes_B = 0;
    char input;
    printf("Instructions:\n");
    printf("1. Press 'A' or 'B' to cast a vote.\n");
    printf("2. Press 'A' or 'B' to view the result.\n");
    printf("Press 'E' to end voting and close the window.\n");
    do {
    scanf(" %c", &input);
    // Why doesn't scanf("%c", &input); work?
    switch (input) {
        case 'A':
            votes_A++;
            break;
            // Pressing AAAAA and then pressing enter casts 5 votes for A.
            // How do I modify the code so that one person can cast only one vote?
        case 'B':
            votes_B++;
            break;
        case 'R':
            printf("Number of votes in favor of candidate A: %d\n",votes_A);
            printf("Number of votes in favor of candidate B: %d\n",votes_B);
            break;
        case 'E':
            printf("Voting has ended. No more votes can be cast.\n");
            break;
        default:
            printf("Invalid input! :(\n");
        }
    } while (input != 'E');

    return 0;
}
