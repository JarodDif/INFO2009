#include <stdio.h>

int main(){
    double t_F, t_C;
    printf("Entrer une temperature en degF: ");
    scanf("%lf", &t_F);
    t_C = 5./9.*(t_F-32.);
    printf("Temperature en degC: %.2lf\n", t_C);
    if(t_C < 2.0){
        printf("Risque de verglas!\n");
    }
}