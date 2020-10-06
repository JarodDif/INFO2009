#include <stdio.h>

void print(int x, int y, int z){
    printf("x = %d, y = %d, z = %d\n", x,y,z);
}

void ex1(){
    int x=0,y=0,z=0;
    z = x++ + --y;
    print(x,y,z);
}

void ex2(){
    int x=0,y=0,z=0;
    z -= x++ && y++ ? 1 : 2;
    print(x,y,z);
}

void ex3(){
    int x=0,y=0,z=0;
    z += ++x && ++y ? 1 : 2;
    print(x,y,z);
}

void ex4(){
    int x=0,y=0,z=0;
    z = x > 0 || !++y ? x++ : ++x;
    print(x,y,z);
}

void ex5(){
    int x=0,y=0,z=0;
    z = (x++, x > 0) ? !x : 1 - !x;
    print(x,y,z);
}

int main(){
    ex1(); ex2(); ex3(); ex4(); ex5();
}