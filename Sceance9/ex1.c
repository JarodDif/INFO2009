#include <stdio.h>

void ex1(){
    int x[2] = { 0, 0 };
    int *y;
    y = x;
    (++y)[0] = 1;
    printf("%d %d\n", x[0], x[1]);
}

void ex2(){
    int a, b, *c;

    a = 1;
    b = 2;
    c = &a;
    a += *c;

    c = &b;
    *c-- = 3;

    printf("%d %d\n", a, b);
}

void ex3(){
    struct {
    int val, *adr;
    } x, *y;

    x.adr = &x.val;
    y = &x;
    x.val = 41;
    y -> val = 42;
    printf("%d\n", *(y -> adr));
}

int main(){
    ex3();
}