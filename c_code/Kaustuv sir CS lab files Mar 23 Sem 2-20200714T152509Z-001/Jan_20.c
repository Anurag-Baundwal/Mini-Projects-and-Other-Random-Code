# include <stdio.h>

void f() {
    void g() {
        printf("Hello ");
        void h() {
            printf("world!\n");
        }
        h();
    }
    g();
}
//14->15->3->11->4->5->9->6->7->8->10->12->16

void k(int *x) {
    *x = 7;
    printf("%s: %d %p %p\n", __func__, *x, &x, x);
}

int main() {
    //f();
    //Node *list = NULL;
    int i = 6, *pi = &i;
    printf("BEFORE CALL: %s: i = %d, &i = %p, pi = %p, *pi = %d \n", __func__, i, &i, pi, *pi);
    k(pi);
    printf("AFTER CALL: %s: i = %d, &i = %p, pi = %p, *pi = %d \n", __func__, i, &i, pi, *pi);
    void (*pk)(int *x);
    //void (*pk)(int *x);
    pk = k;
    i = (int) pk;
    pk = (void (*)(int *x)) i;
    //pk = (void (*)(int *x)) i;
    pk(&i);
    int (*pointer_name) (const char *, ...);
    pointer_name = printf;
    pointer_name("Hello, world %d %d!\n", 5, 7);
    return 0;
}
