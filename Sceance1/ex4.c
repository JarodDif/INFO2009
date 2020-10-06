#include <stdio.h>

unsigned long long multifact(long long n, long long k){
    if(n < k){
        return 1ULL; 
    }
    return n*multifact(n-k,k);
}

int main(){
    long long n,k;
    printf("Entrer n et k: ");
    scanf("%llu %llu", &n, &k);
    printf("Resulat de M(%llu,%llu) = %llu\n", n,k,multifact(n,k));
}