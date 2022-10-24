# include <stdio.h>
# include <stdlib.h>

typedef struct node Node;
typedef Node *Link; // struct node *Link;
typedef void *Data;
/*
typedef struct Data {
    int power;
    int coeff;
} Data;
 */


struct node {
    Data data;
    Link link;
};

Link newNode() {
}
