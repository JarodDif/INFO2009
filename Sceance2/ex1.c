#include <stdio.h>

int main(){
    int n=0;
    printf("Entrer l'indice: ");
    scanf("%d", &n);
    if(n < 3){
        printf("1\n"); return 0;
    }
    int fib[2] = {1,1};
    for(int i=2;i<n;++i){
        fib[i%2] = fib[0]+fib[1];
    }
    printf("F%d = %d", n, fib[(n-1)%2]);
}