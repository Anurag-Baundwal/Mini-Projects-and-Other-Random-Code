# include <stdio.h>
# include <stdlib.h>

# define GENERIC

# ifdef GENERIC
    # define Data void *
    # define DataDefaultValue NULL
# else
    # define Data int
    # define DataDefaultValue 0
# endif

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

typedef struct student {
    int roll;
    char *name;
    int marks;
} Student;

Student *newStudent(int roll, char *name, int marks) {
    Student *pstudent = (Student *) calloc(1, sizeof(Student));
    pstudent->roll = roll;
    pstudent->name = name;
    pstudent->marks = marks;
    return pstudent;
}

void printStudent(void *pvdata) {
    Student *pstudent = (Student *) pvdata;
    printf("Roll : %d\n", pstudent->roll );
    printf("Name : %s\n", pstudent->name );
    printf("Marks: %d\n", pstudent->marks);
}

typedef struct book_t {
    int ukey; /* A unique key assigned to the book. */
    char *issn; /* A pointer to the ISSN number of the book. */
    char *name; /* A pointer to the name of the book. */
} Book;

Book *newBook(int ukey, char *issn, char *name) {
    Book *pbook = (Book *) calloc(1, sizeof(Book));
    pbook->ukey = ukey;
    pbook->issn = issn;
    pbook->name = name;
    return pbook;
}

void printBook(void *pvdata) {
    Book *pbook = (Book *) pvdata;
    printf("UKey: %d\n", pbook->ukey );
    printf("ISSN: %s\n", pbook->issn );
    printf("Name: %s\n", pbook->name);
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

# ifdef GENERIC
    void printList(Node *pnode, void (*printData)(void *)) {
# else
    void printList(Node *pnode) {
# endif // GENERIC
    Node *plast = NULL;
    printf("Forward:\n");
    while (pnode != NULL) {
        # ifdef GENERIC
            printData(pnode->data);
            printf("--->\n");
        # else
            printf("%d -> ", pnode->data);
        # endif
        plast = pnode;
        pnode = pnode->next;
    }
    printf("NULL\n"
           "Backward:\n");
    while (plast) {
        # ifdef GENERIC
            printData(plast->data);
            printf("--->\n");
        # else
            printf("%d -> ", plast->data);
        # endif // GENERIC
        plast = plast->prev;
    }
    printf("NULL\n");
}

void sort(Node **ppnode, int (*compare)(Data, Data)) {
    if (*ppnode == NULL || (*ppnode)->next == NULL) {
        return;
    }
    Node *smaller = NULL;
    Node *larger  = NULL;
    Data pivot = removeFirst(ppnode);
    while (*ppnode) {
        Data current = removeFirst(ppnode);
        if (compare(current, pivot) < 0) {
            addFirst(&smaller, current);
        } else {
            addFirst(&larger, current);
        }
    }
    sort(&smaller, compare);
    sort(&larger, compare);
    addLast(&smaller, pivot);
    while (larger) {
        addLast(&smaller, removeFirst(&larger));
    }
    *ppnode = smaller;
}

int compareBookUsingUKey(Data data1, Data data2) {
    Book *pb1 = (Book *) data1, *pb2 = (Book *) data2;
    return pb1->ukey - pb2->ukey;
}

int compareStudentUsingRoll(Data data1, Data data2) {
    Student *ps1 = (Student *) data1, *ps2 = (Student *) data2;
    return ps1->roll - ps2->roll;
}

void f(int x) {
    char *a[] = {"", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen" , "eighteen" ,"nineteen", "twenty"};
    char *b[] = {"","ten","twenty","thirty","forty","fifty",
    "sixty","seventy","eighty","ninety"};
    char *c[] = {"", "ten", "hundred","thousand"};

    int x100 = (x % 1000) / 100;
    if (x100) {
        printf("%s %s ", a[x100], c[2]);
    }
    int x10 = (x % 100) / 10;
    if (x10 > 1) {
        printf("%s ", b[x10]);
    }
    int x20 = x %20;
    printf("%s\n", a[x20]);
    if (x == 0) {
        printf("zero\n");
    }
}

int main() {
    # ifdef GENERIC
    /*
    Node *list = NULL;
    addFirst(&list, (void *) newStudent(209, "Ujjwal", 32));
    addFirst(&list, (void *) newStudent(190, "Shivi",  34));
    addFirst(&list, (void *) newStudent(166, "Sampriti", 26));
    addFirst(&list, (void *) newStudent(184, "Shevya", 28));
    //printList(list, printStudent);
    sort(&list, compareStudentUsingRoll);
    printList(list, printStudent);

    Node *bookList = NULL;
    addFirst(&bookList, (void *) newBook(209, "ISSN 1", "Let Us C"));
    addFirst(&bookList, (void *) newBook(190, "ISSN 2", "The C Programming Language"));
    addFirst(&bookList, (void *) newBook(237, "ISSN 3", "XYZ"));
    sort(&bookList, compareBookUsingUKey);
    printList(bookList, printBook);*/
    f(120);
    /*
    Node *plist_fac = NULL;
    addFirst(&plist_fac, (void *) newFaculty(98, "Name", "DS"));
    printList(list, printFculty);
    */
    # else
    Node *list = NULL;
    addFirst(&list, 1);
    addFirst(&list, 2);
    printList(list);
    # endif
}
