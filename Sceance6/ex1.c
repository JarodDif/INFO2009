#include <stdio.h>

#define size(a,type) sizeof(a)/sizeof(type)

double average(double arr[], int N){
    //printf("%d\n",N);
    double sum = 0.;
    for(int i=0; i<N;++i){
        sum += arr[i];
        //printf("%lf\n", arr[i]);
    }
    return sum/N;
}

int main(){
    double arr[] = {3.2,4.5,1.9,8.8,13.33};
    printf("Average: %lf\n", average(arr, size(arr,double)));
}