#include <stdio.h>

int str_len(char* s){
    int i=0;
    while(s[i]){
        ++i;
    }
    return i;
}

int check_LCsuffix(char *s1, char *s2){
    int N1 = str_len(s1), N2 = str_len(s2);
    int N = (N1<N2)?N1:N2;
    for(int i = 0; i < N; ++i){
        if(s1[N1-1-i] != s2[N2-1-i]){
            return i;
        }
    }
    return N;
}

int main(){
    char *s1 = "abcde", *s2 = "bacde";
    printf("%d", check_LCsuffix(s1,s2));
}