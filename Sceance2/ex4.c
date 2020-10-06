#include <stdio.h>

int primes[46] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 
                31, 37, 41, 43, 47, 53, 59, 61, 67, 
                71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 
                113, 127, 131, 137, 139, 149, 151, 157, 
                163, 167, 173, 179, 181, 191, 193, 197, 199};

int exposant[46] = {0};

int main(){
    int number = 0;
    printf("Entrer le nombre: ");
    scanf("%d", &number);

    if(number < 0){
        printf("Le nombre n'est pas positif");
    }else if(number < 2){
        printf("%d", number);
    }else{
        for(int i=0; i<46 && number!=1;++i){
            while(number%primes[i] == 0){
                ++exposant[i];
                number /= primes[i];
            }
        }
        
        for(int i=0;i<46;++i){
            if(exposant[i]==1){
                printf("%d ", primes[i]);
            }else if(exposant[i]>1)
            {
                printf("%d^%d ", primes[i], exposant[i]);
            }
        }printf("\n");
        if(number != 1){
            printf("Le nombre n'a pas ete completement factorise, il reste : %d\n", number);
        }
    }

}