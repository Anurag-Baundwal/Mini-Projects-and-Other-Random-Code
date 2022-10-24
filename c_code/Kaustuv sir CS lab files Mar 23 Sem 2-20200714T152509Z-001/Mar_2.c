# include <stdio.h>

typedef void *Something;
//typedef return_type (*Identifier) (paramaters);
typedef float (*FloatFunctionFloatFloat) (float, float);

typedef float (*NAME)(float, float);
//NAME name = add;

float add(float x, float y) {
    //printf("Hello\n");
    return x + y;
}


float sub(float x, float y) {
    return x - y;
}

float mul(float x, float y) {
    return x * y;
}


float div(float x, float y) {
    return x / y;
}


FloatFunctionFloatFloat inverse(FloatFunctionFloatFloat function) {
    if (function == add) {
        return sub;
    }
    if (function == sub) {
        return add;
    }
    if (function == div) {
        return mul;
    }
    if (function == mul) {
        return div;
    }
    return NULL;
}

//int *f();
//int (*f)();

void afunc() {
    int a;
    void g() {
    }
    printf("%x %x %x\n", &a, g, afunc);
}


int main() {
    float x = 6, y = 4;
    FloatFunctionFloatFloat f = add;
    float z = (sub - add + sub)(x, y);
    float w = ((float (*)(float, float)) f)(x, y);
    FloatFunctionFloatFloat ffff = add;
    float e = ffff(x, y);
    printf("%g\n", z);
    printf("%d %d %d %d\n", (unsigned)sub, (unsigned)add, (unsigned)(sub - add + sub), (unsigned)mul);
    afunc();
    f = add;
    x = 5;
    printf("%g\n", inverse(f)(f(x, y), y));
    struct {int x; int y;} x1 = {
        .y = 7,
        .x = 6,
    };

    printf("%d %d\n", x1.x, x1.y);
    int a[10] = {[5] 7, 19, [3] 17, 18};
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
}
