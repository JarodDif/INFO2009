#include <stdio.h>

int cmpStr(char* s1, char* s2){
    int i = 0;
    while(s1[i] && s2[i]){
        if(s1[i] != s2[i]) return i+1;
        ++i;
    }
    if(s1[i] || s2[i]) return i+1;
    return 0;
}

int main(){
    char *s1 = "Hello World", *s2 = "Hello World";
    printf("%d", cmpStr(s1,s2));
}