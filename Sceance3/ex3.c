void ex1(){
    for(int i=2; i<10000;i*=2){ j += i;}
}

void ex2(){
    for(int p = premier(); !est_dernier(p); p = suivant(p)){
        traiter(p);
    }
}

void ex3(){
    for(;attendre(););
}

void ex4(){
    for(int i=0, j=0; j<k ; j+=i++);
}