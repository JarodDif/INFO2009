#include <stdio.h>
#include <stdlib.h>

int* steps;
int N = 100;

void init_steps(){
    steps = (int*) calloc(N, sizeof(int));
    for(int i=0; i<N;++i){
        steps[i] = -1;
    }
    steps[1] = 0;
}

void set_value(int index, int value){
    if(index > N){
        steps = realloc(steps, index+1);
        for(int i=N; i<=index;++i){
            steps[i] = -1;
        }
    }
    steps[index] = value;
}

int find_amount_steps(int value){
    if(value >= N || steps[value] == -1){ //Value was not calculated before
        int new_val = (value%2==0)?value/2:3*value+1;
        int amount_steps = find_amount_steps(new_val);
        set_value(value, amount_steps+1);
    }
    return steps[value];
}

int main(){
    init_steps();

    int value;

    printf("Entrer un nombre: ");
    scanf("%d", &value);

    printf("Il faut %d etapes pour arriver a 1\n", find_amount_steps(value));

    free(steps); //Always free memory
}