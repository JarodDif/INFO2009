#include <stdio.h>

void ex1(){
    int t[2] = { -2, 0 };
    int *a, b;
    b = *t ? ++*t : --*t;
    a = &b;
    printf("%d\n", a[*(t + 1)]);
}

int main(){
    ex1();
}