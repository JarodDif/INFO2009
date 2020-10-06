#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,d, s1, s2;
    printf("Veuillez entrer les coefficients de l'equation (separer par un expace): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0 && b == 0){
        printf("Nan\n"); return 0;
    }
    if(a == 0){
        s1 = -c/b;
        printf("La solution de cette equation du premier degré est : %lf\n", s1);
        return 0;
    }
    d = b*b-4*a*c;
    if(d < 0.){
        printf("L'equation n'a pas de solution reelle\n");
    }else if(d == 0.){
        s1 = -b/(2*a);
        printf("L'equation admet une solution double qui est %lf\n", s1);
    }else{
        s1 = (-b-sqrt(d))/(2*a); s2 = (-b+sqrt(d))/(2*a);
        printf("L'equation admet les solutions %lf et %lf\n", s1,s2);
    }
}