#include <stdio.h>
#include <math.h>

#define true 1
#define false 0

long long primes[100000]={2};
int N = 1;

int main(){
    printf("%6d ",2);
    int isPrime = false;
    double root;
    for(long long c=3; c<=99999;c+=2){
        isPrime = true;
        root = sqrt(c);
        for(int i=0; i<N && primes[i] <= root;++i){
            if(c%primes[i]==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes[N++] = c;
            printf("%6lld ", c);
            if(N%10 == 0){
                printf("\n");
            }
        }
    }
    printf("\n");
}