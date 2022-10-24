# include <stdio.h>
# include <stdlib.h>

# define Data int
# define dataDefaultValue 0

typedef struct queue {
    int rear, front, size;
    unsigned int capacity;
    Data *array;
} Queue;

Queue *newQueue(const unsigned int capacity) {
    Queue *pqueue = (Queue *) calloc(1, sizeof(Queue));
    pqueue->rear = capacity - 1;
    pqueue->front = 0;
    pqueue->size = 0;
    pqueue->capacity = capacity;
    pqueue->array = (int *) calloc(capacity, sizeof(Data));
    return pqueue;
}

int isEmpty(Queue *pqueue) {
	return pqueue->size == 0;
}

int isFull(Queue *pqueue) {
    return pqueue->size == pqueue->capacity;
}

int enqueue(Queue *pqueue, Data data) {
    if (isFull(pqueue)) {
        return -1;
    }
    pqueue->rear = (pqueue->rear + 1) % pqueue->capacity;
    pqueue->array[pqueue->rear] = data;
    (pqueue->size)++;
    return 0;
}

Data dequeue(Queue *pqueue) {
    if (isEmpty(pqueue)) {
        fprintf(stderr, "Queue underflow!\n");
        return dataDefaultValue;
    }
    Data data = pqueue->array[pqueue->front];
    pqueue->front = (pqueue->front + 1) % pqueue->capacity;
    (pqueue->size)--;
    return data;
}

Data peek(Queue *pqueue) {
    if (isEmpty(pqueue)) {
        fprintf(stderr, "Queue underflow!\n");
        return dataDefaultValue;
    }
    Data data = pqueue->array[pqueue->front];
    return data;
}

int main() {
    Queue *pqueue = newQueue(3);
    isEmpty(pqueue);
    isFull(pqueue);
    for (int i = 1; i < 6; i++) {
        printf("Enqueue: %d\n", enqueue(pqueue, i));
    }
    printf("peek: %d\n", peek(pqueue));
    for (int i = 1; i < 6; i++) {
        printf("Dequeue: %d\n", dequeue(pqueue));
    }

}


