#include <stdio.h>

/**
 * 1. additionne un nombre sur deux de 0 en prenant ceil(nb/2) nombres
 * 2. O(nb)
 * */

int f_iter(int t[], int nb){
    int sum = 0;
    for(int i=0;nb > 0; nb-=2,i+=2){
        sum += t[i];
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    printf("%d", f_iter(arr, 9));
}