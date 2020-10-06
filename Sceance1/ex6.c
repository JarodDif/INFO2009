#include <stdio.h>

#define ll long long

int main(){
    long long input; unsigned long long converted;
    printf("Entrer le nombre: ");
    scanf("%lld", &input);
    if(input < 0){
        printf("On ne sait pas calculer le log2 d'un nombre negatif ou nul");
    }else{
        converted = (unsigned long long) input;
        //printf("%llu", converted);
        for(int i=63; i>=0;--i){

            if(converted & (1ULL<<i)){
                printf("Le log2 arrondi au plus petit entier de l'entree est %d\n", i); break;
            }
        }
    }
}