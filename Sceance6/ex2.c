#include <stdio.h>
#include <stdlib.h>

void swap (int** a, int **b){
    int* temp = *a; *a = *b; *b = temp;
}

int main(){
    int MAX_N = 10;
    int* last = (int*)calloc(MAX_N, sizeof(int));
    int* current = (int*)calloc(MAX_N, sizeof(int));

    last[0] = 1;
    printf("1\n");
    for(int n=1; n<MAX_N;++n){
        for(int m = 0; m<=n;++m){
            if(m == 0 || m == n){
                current[m] = 1;
            }else{
                current[m] = last[m-1]+last[m];
            }
            printf("%d ", current[m]);
        }
        printf("\n");
        swap(&last, &current);
    }
}