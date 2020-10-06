#include <stdio.h>
#include <float.h>


int main(){
    long N = 0;
    double input, sum=0.0, product=1.0, max = -DBL_MAX, min = DBL_MAX;

    printf("Entrer les nombres un par un: ");
    while(scanf("%lf", &input) != -1){
        //printf("value entered : %lf\n", input);
        ++N; sum += input; product *= input; min = (input < min)?input:min; max = (input > max)?input:max;
        //printf("Nombre d'element : %ld, Somme : %lf, Produit : %lf, Moyenne arithmetique : %lf, Maximum : %lf, Minimum : %lf\n", N, sum, product, sum/N, max, min);
    }
    if(N==0){
        printf("Aucun elements entres");
    }else{
        printf("Nombre d'element : %ld, Somme : %lf, Produit : %lf, Moyenne arithmetique : %lf, Maximum : %lf, Minimum : %lf\n", N, sum, product, sum/N, max, min);
    }
}