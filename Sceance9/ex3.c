#include <stdio.h>

void ex1(){
    int t[2] = { 1, 2 };
    int *a, **b;
    a = t + *t;
    b = &a;
    printf("%d\n", *--*b);
}

int main(){
    ex1();
}