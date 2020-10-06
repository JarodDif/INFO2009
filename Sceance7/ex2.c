#include <stdio.h>

int str_len(char* s){
    int i=0;
    while(s[i]){
        ++i;
    }
    return i;
}

int check_palindrome(char* s){
    int N = str_len(s);
    for(int i=0; i<=N/2;++i){
        if(s[i] != s[N-1-i]) return 0;
    }
    return 1;
}

int main(){
    char *s1 = "Unit test", *s2 = "acbca";
    printf("%d %d", check_palindrome(s1), check_palindrome(s2));
}