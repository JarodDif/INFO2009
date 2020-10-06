#include <stdio.h>

double combination(double n, double k){
    if(n < 0 || k < 0 || k > n){
        return 0;
    }
    if(k == 0){
        return 1.;
    }
    if(n-k < k){
        k = n-k;
    }
    return n/k*combination(n-1,k-1);
}

int main(){
    int n,k;
    printf("Entrer n et k: ");
    scanf("%d %d", &n, &k);
    printf("C(%d,%d) = %.0lf\n", n, k, combination(n,k));
}