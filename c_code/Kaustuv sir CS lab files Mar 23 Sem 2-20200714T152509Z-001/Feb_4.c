# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

# define Data int
# define DataDefaultValue 0;


typedef struct node {
    Data data;
    struct node *next;
} Node;


Node *newNode(Data data, Node *next) {
    Node *pnode = (Node *) calloc(1, sizeof(Node));
    pnode->data = data;
    pnode->next = next;
    return pnode;
}

typedef struct list {
    Node *head, *tail;
} List;

List *newList(Node *head, Node *tail) {
    List *plist = (List *) calloc(1, sizeof(List));
    plist->head = head;
    plist->tail = tail;
    return plist;
}

int addWhenEmpty(List *plist, Data data) {
    if (plist->head) {
        return -1;
    }
    plist->head = plist->tail = newNode(data, NULL);
    plist->head->next = plist->head;
    return 0;
}

void addFirst(List *plist, Data data) {
    if (plist->head == NULL) {
        addWhenEmpty(plist, data);
        return;
    }
    plist->head = newNode(data, plist->head);
    plist->tail->next = plist->head;
}

Data removeFirst(List *plist) {
    if (plist->head == NULL) {
        fprintf(stderr, "Failed to remove.\n");
        return DataDefaultValue;
    }
    if (plist->head == plist->tail) {
        Data data = plist->head->data;
        free(plist->head);
        plist->head = plist->tail = NULL;
        return data;
    }
    Data data = plist->head->data;
    plist->head = plist->head->next;
    free(plist->tail->next);
    plist->tail->next = plist->head;
    return data;
}

void printList(List *plist) {
    Node *pnode = plist->head;
    if (pnode == NULL) {
        printf("NULL\n");
        return;
    }
    do {
        printf("%d -> ", pnode->data);
        pnode = pnode->next;
    } while (pnode != plist->head);
    printf("HEAD\n");
    return;
}

int main(int argc, char *argv[]) {
    List *plist = newList(NULL, NULL);
    printList(plist);
    addFirst(plist, 1);
    printList(plist);
    addFirst(plist, 2);
    printList(plist);
    removeFirst(plist);
    printList(plist);
    //THIS IS WRONG
    List *plist2 = newList(plist->head, plist->tail);
    removeFirst(plist2);
    printList(plist2);
}
