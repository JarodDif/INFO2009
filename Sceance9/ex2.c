#include <stdio.h>

void ex1(){
    int a[] = { 1, 0 };
    int *b[2];
    int **c;
    b[*a] = a + 1; //b[1] = &(a[1])
    c = b; // c = &b[0]
    printf("%d\n", **++c); // ++c = &b[1] -> *++c = b[1] = &a[1] -> **++c = *b[1] = a[1]
}

int main(){
    ex1();
}