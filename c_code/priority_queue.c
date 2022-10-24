/* See Data Structures and Algorithm Analysis in C by Mark Allen Weiss for an explanation of the code */

struct heap_struct
{
    unsigned int max_heap_size; // Max # that can fit in the heap
    unsigned int size;          // Current # of elements in the heap
    int *elements;
};

typedef struct heap_struct *PRIORITY_QUEUE;

PRIORITY_QUEUE create_pq(unsigned int max_elements)
{
    PRIORITY_QUEUE H;
    if (max_elements < MIN_PQ_SIZE)
        error("Priority queue size is too small");
    H = (PRIORITY_QUEUE)malloc(sizeof(struct heap_struct));
    if (H == NULL)
        fatal_error("Out of space!!!"); /* Allocate the array + one extra for sentinel */
    H->elements = (int *)malloc((max_elements + 1) * sizeof(int));
    if (H->elements == NULL)
        fatal_error("Out of space!!!");
    H->max_heap_size = max_elements;
    H->size = 0;
    H->elements[0] = MIN_DATA;
    return H;
}

// Procedure to Insert Into a Binary Heap ----------------------------------------------------
/* H->element[0] is a sentinel */
void insert(int x, PRIORITY_QUEUE H)
{
    unsigned int i;
    if (is_full(H))
        error("Priority queue is full");
    else
    {
        i = ++H->size;
        while (H->elements[i / 2] > x)
        {
            H->elements[i] = H->elements[i / 2];
            i /= 2;
        }
        H->elements[i] = x;
    }
}
// ----------------------------------------------------------------------------------------------

// Function to perform delete_min in a binary heap ------------------------------------------------------
int delete_min(PRIORITY_QUEUE H)
{
    unsigned int i, child;
    int min_element, last_element;
    if (is_empty(H))
    {
        error("Priority queue is empty");
        return H->elements[0];
    }
    min_element = H->elements[1];
    last_element = H->elements[H->size--];
    for (i = 1; i*2 <= H->size; i = child)
    {
        /* find smaller child */
        child = i * 2;                            
        if ((child != H->size) && (H->elements[child + 1] < H->elements[child])) 
            child++; /* percolate one level */                                   
        if (last_element > H->elements[child])                                   
            H->elements[i] = H->elements[child];
        else
            break;
    }                              
    H->elements[i] = last_element; 
    return min_element;
}
// Working: Create a hole at the top and percolate it down the heap
// Time complexity : O(logn) for a single deletion
// ---------------------------------------------------------------------------------------------------