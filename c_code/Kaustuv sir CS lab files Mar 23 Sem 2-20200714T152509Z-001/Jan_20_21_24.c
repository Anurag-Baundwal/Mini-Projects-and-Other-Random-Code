# include <stdio.h>
# include <stdlib.h>

# define Data int
# define DataDefaultValue 0

typedef struct node {
    struct node *prev;
    Data data;
    struct node *next;
} Node;

Node *newNode(Node *prev, Data data, Node *next) {
    Node *pnode = (Node *) calloc(1, sizeof(Node));
    pnode->prev = prev;
    pnode->data = data;
    pnode->next = next;
    return pnode;
}

void addFirst(Node **ppnode, Data data) {
    *ppnode = newNode(NULL, data, *ppnode);
    if ((*ppnode)->next) {
        (*ppnode)->next->prev = *ppnode;
    }
}

void addLast(Node **ppnode, Data data) {
    if (*ppnode == NULL) {
        return addFirst(ppnode, data);
    }
    Node *pnode = *ppnode;
    while (pnode->next) {
        pnode = pnode->next;
    }
    pnode->next = newNode(pnode, data, NULL);
}

Data removeFirst(Node **ppnode) {
    if (*ppnode == NULL) {
        fprintf(stderr, "Failed to remove: the list is empty!\n");
        return DataDefaultValue;
    }
    Data data = (*ppnode)->data;
    Node *pnode = *ppnode;
    *ppnode = pnode->next; // *ppnode = (*ppnode)->next;
    free(pnode);
    if (*ppnode != NULL) {
        (*ppnode)->prev = NULL;
    }
    return data;

}

Data removeLast(Node **ppnode) {
    if (*ppnode == NULL || (*ppnode)->next == NULL) {
        return removeFirst(ppnode);
    }
    Node *pnode = *ppnode;
    while (pnode->next) {
        pnode = pnode->next;
    }
    pnode->prev->next = NULL;
    Data data = pnode->data;
    free(pnode);
    return data;
}

void printList(Node *pnode) {
    Node *plast = NULL;
    printf("Forward : ");
    while (pnode != NULL) {
        printf("%d -> ", pnode->data);
        plast = pnode;
        pnode = pnode->next;
    }
    printf("NULL\n"
           "Backward: ");
    while (plast) {
        printf("%d -> ", plast->data);
        plast = plast->prev;
    }
    printf("NULL\n");
}

Data removeFromPosition(Node **ppnode, int position) {
    if (*ppnode == NULL || position == 0) {
        return removeFirst(ppnode);
    }
    Node *pnode = *ppnode;
    while (pnode && position--) {
        pnode = pnode->next;
    }
    if (pnode == NULL) {
        fprintf(stderr, "Failed to remove.\n");
        return DataDefaultValue;
    }
    pnode->prev->next = pnode->next;
    if (pnode->next) {
        pnode->next->prev = pnode->prev;
    }
    Data data = pnode->data;
    free(pnode);
    return data;
}

int addAfterData(Node *pnode, Data key, Data data) {
    if (pnode == NULL) {
        return -1;
    }
    while (pnode && pnode->data != key) {
        pnode = pnode->next;
    }
    if (pnode == NULL) {
        return -1;
    }
    pnode->next = newNode(pnode, data, pnode->next);
    if (pnode->next->next) {
        pnode->next->next->prev = pnode->next;
    }
    return 0;
}

void insertIntoSortedList(Node **ppnode, Data data) {
    if (*ppnode == NULL || (*ppnode)->data > data) {
        return addFirst(ppnode, data);
    }
    Node *pnode = *ppnode;
    while (pnode->next && pnode->next->data < data) {
        pnode = pnode->next;
    }
    pnode->next = newNode(pnode, data, pnode->next);
    if (pnode->next->next) {
        pnode->next->next->prev = pnode->next;
    }

}

void driver1() {
    Node *pnode = NULL;
    //addLast(&pnode, 1);
    //addLast(&pnode, 2);
    //addLast(&pnode, 3);
    //printList(pnode);
    /*
    for (int i = 0; i < 4; i++) {
        printf("Removed: %d\n", removeLast(&pnode));
        printList(pnode);
    }*/
    //printf("Removed: %d\n", removeFromPosition(&pnode, 2));
    //printList(pnode);
    //addAfterData(pnode, 3, 16);
    //printList(pnode);
    int a[100] = {13, 10, 5, 17, 19, 2, 17};
    printList(pnode);
    for (int i = 0; i < 7; i++) {
        insertIntoSortedList(&pnode, a[i]);
        printList(pnode);
    }
}

int main() {
    driver1();
}
