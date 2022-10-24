#include <stdio.h>
#include <stdlib.h>

/*
    Empty queue :
    +---------------------------------------+
    |    |    |    |    |    |    |    |    |                            |
    +---------------------------------------+
    front = -1
    rear = -1   The index of the last element.
                As soon as an element is added front becomes 0 and stays there.
                Also, rear gets incremented.

    Queue with one element :
    +---------------------------------------+
    | 10 |    |    |    |    |    |    |    |                            |
    +---------------------------------------+
    front = 0 (and stays there)
    rear = 1
*/

int maxLen, front = -1, rear = -1, size, x, i, j;

void enqueue (int *q, int x) {
    if (rear >= maxLen) {
        printf ("Error : Queue overflowed. No space for new element.\n");
        return;
    } // --------------------------------------------
    else {
        if (front == -1) { // empty queue ----------
            front++;
        }

        printf  ("Enter an integer : ");
        scanf   ("%d", &x); *(q+rear+1) = x;
        rear++;

        for (i=front; i<=rear; i++) {
            printf ("%d <-- ", *(q+i));
        }   printf ("\n");
        //  Displays the queue ---------------

        return;
    } //---------------------------------------
} // ==================================

void dequeue (int *q) {
    if (front == rear) {
        printf("Error : Queue underflowed. No element to dequeue.\n");
        for (i=front; i<rear; i++) {
            printf ("%d <-- ", *(q+i));

        }   printf ("\n");
        //  Displays the queue -----------

        return;
    } // ------------------------
    else {
            for     (i=front; i<rear; i++) {
            printf ("%d <-- ", *(q+i));
        }   printf ("\n");
        //  Displays the queue -----------
        front++;
        return;
    } // ------------------------
} // ======================================

int seeFront (int *q) {
    return q[front];
} // ======================

int seeRear (int *q) {
    return q[rear];
} // ======================

int main ()
{
    printf  ("Welcome to simple queue C program.\n");
    printf  ("Enter the max length of the queue : ");
    scanf   ("%d", &maxLen);
    int *q;
    q = malloc(maxLen*sizeof(int));
    printf("Successfully allocated memory for a queue of maximum size 4.\n");
    // Now we have allocated some memory for the queue ------------------------------

    int choice; /// DANGER !!!!!
    printf  ("Here are the operations you can perform : \n");
    printf  ("0. Terminate program\n1. Enqueue\n2. Dequeue\n3. Access the front element\n4. Access the rear\n");
    do {
        printf  ("\nEnter your choice : ");
        scanf   ("%d", &choice);
        // -----------------------------------------------------------------------

        switch  (choice) {
            case 0 : exit(0); break;
            case 1 : enqueue(q, x); break;
            case 2 : dequeue(q); break;
            case 3 : printf("%d\n", seeFront(q)); break;
            case 4 : printf("%d\n", seeRear(q)); break;

            default :   printf("Error : The choice need to be between 0 and 4 (both included).\n");
                        break;
        } // End of switch case ----------------------------------------------------------------------
    } while (1);    // always true
                    // while loop always runs but
                    // as soon as choice == 0
                    // the program terminates
    return 0;
 } // ================================
