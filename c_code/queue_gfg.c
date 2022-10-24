// C program for array implementation of queue
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
struct Queue
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue *createQueue(unsigned capacity)
{
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(queue->capacity * sizeof(int)); 
    return queue;
}

int isFull(struct Queue *queue) {
    return (queue->size == queue->capacity);
}

int isEmpty(struct Queue *queue) {
    return (queue->size == 0);
}

void enqueue(struct Queue *queue, int item) // adds item at index rear + 1 
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity; // first increment rear
    queue->array[queue->rear] = item;                   // and then insert there
    queue->size += 1;
    printf("%d enqueued to queue. It's now present at index %d\n", item, queue->rear);
}

int dequeue(struct Queue *queue) // returns and deletes item at index front and then decremenets front
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front]; // first get the item at the front and then change front
    queue->front = (queue->front + 1) % queue->capacity; // and then change front to reflect its new value   
    queue->size -= 1;                        
    printf ("%d dequeued fron queue\n", item);  
    return item;
}

int front(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
int rear(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}

/* void display_queue (struct Queue* q)
{
    if (q->front <= q->rear) {
        printf ("FRONT ... ");
        for (int i=(q->front); i<=(q->rear); i++)
            printf("%d ", q->array[i]);
        printf (" ... REAR\n\n");
    }
    else {
        printf ("REAR ... ");
        for (int i=(q->rear); i<=(q->front); i++)
            printf("%d ", q->array[i]);
        printf (" ... FRONT\n\n");
    }
} */

// Driver program to test above functions./
int main()
{
    struct Queue *queue = createQueue(5);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    dequeue(queue);
    dequeue(queue);
    
    enqueue(queue, 60);
    enqueue(queue, 70);

    printf ("%d %d", queue->front, queue->rear);
    // display_queue(queue);    
    for(int i=0; i<queue->capacity; i++)    
        printf ("%d ", queue->array[i]);
    
    printf ("\n");
    printf ("Hellow darkness my old friend.\nMy program has ended once again.\n");
    
    return 0;
}
