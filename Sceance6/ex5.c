#include <stdio.h>

int multiplicite(int n, int f){
    int m = 0;
    while(n%f==0){
        ++m; n/=f;
    }
    return m;
}