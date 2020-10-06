#include <stdio.h>

#define size(a,type) sizeof(a)/sizeof(type)

int LCS(int arr[], int n){
    int max_len = 0, cur_len = 1;;
    for(int i=0; i<n;++i){
        cur_len = 1;
        int arrived_at_the_end = 1;
        for(int j = i+1; j<n; ++j){
            if(arr[j]-1 != arr[j-1]){
                max_len = (cur_len>max_len)?cur_len:max_len;
                i = j;
                arrived_at_the_end = 0;
                break;
            }else{
                ++cur_len;
            }
        }
        if(arrived_at_the_end) break;
    }
    max_len = (cur_len>max_len)?cur_len:max_len; // check for the last vals;
    return max_len;
}

int main(){
    int arr[] = {1, 2, 6, 4, 5, 6, 6, 3, 4, 1};

    printf("%d\n", LCS(arr, size(arr,int)));
}