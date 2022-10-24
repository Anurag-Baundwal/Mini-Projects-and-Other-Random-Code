# include <stdio.h>


# define Data int

typedef struct point {
    int x;
    int y;
} Point;

typedef struct rectangle {
    Point a;
    Point b;
} Rectangle;

struct aStruct {
    int a;
    char *pc;
};

union X {
    int x;
    char y;
};

struct Node {
    Data data;
    struct Node *next;
};


int main() {
    char abc[100] = "Hello, world", *phello = "Hello, world";
    Rectangle r, *pr = &r;
    r.a.x = 5;
    r.a.y = 6;
    r.b.x = 7;
    r.b.y = 8;
    pr->a.x = 5;
    (pr->a).x = 5;
    (*pr).a.x = 5;
    printf("%p %p %p\n", &(pr->a.x), &((pr->a).x), &((*pr).a.x));

    struct aStruct as = {5, "Hello, world"}, *pas = &as, bs = {6, "Hey"};
    struct aStruct cs;
    as.pc = abc;
    printf("%d %s\n%d %s\n%d %d\n", as.a, as.pc, bs.a, bs.pc, sizeof(as), sizeof(bs));
    cs = as;
    cs.pc[3] = 'X';
    printf("CHECK: %s\n", as.pc);
    printf("%d %d\n", sizeof(char), sizeof(int));

    union X ax, bx;

    printf("%p %p %p", &ax.x, &ax.y, &ax);
    return 0;
}
