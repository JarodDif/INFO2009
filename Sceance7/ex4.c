#include <stdio.h>

/**
 * 1. f compte le nombre de character numérique dans s
 * 2. O(n) avec n = taille de s
 * 
 * */

int f_iter(char *s){
    int n = 0;
    for(int i=0; s[i]; ++i){
        if('0'<=s[i] && s[i]<='9'){++n;}
    }
    return n;
}

int main(){
    char *s = "123abc44";
    printf("%d\n", f_iter(s));
}