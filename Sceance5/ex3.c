#include <math.h>

#include "draw.h"

#define THICKNESS 1

void recur_sierpinski(int depth, int x0, int y0, int x1, int y1, int x2, int y2){
    if(depth > 6){
        return;
    }
    //Dessiner les trois segments
    draw_line(x0,y0,x1,y1,THICKNESS,0,0,0);
    draw_line(x0,y0,x2,y2,THICKNESS,0,0,0);
    draw_line(x1,y1,x2,y2,THICKNESS,0,0,0);

    //Calculer les milieux
    int x_01 = x0+(x1-x0)/2, y_01 = (y0+y1)/2;
    int x_02 = x0+(x2-x0)/2, y_02 = (y0+y2)/2;
    int x_12 = x1+(x2-x1)/2, y_12 = (y1+y2)/2;

    //Appels recursifs
    recur_sierpinski(depth+1, x0,y0, x_01,y_01, x_02,y_02);
    recur_sierpinski(depth+1, x_01,y_01, x1,y1, x_12,y_12);
    recur_sierpinski(depth+1, x_02,y_02, x_12,y_12, x2,y2);
}

int main(){
    draw_init("ex3.svg", 400, 400);

    int xc = 200, yc = 200, radius = 100;

    int x0 = xc, y0 = yc-radius, 
        x1 = xc + (int)(radius*sin(2*M_PI/3.0)), y1 = yc - (int)(radius*cos(2*M_PI/3.0)), 
        x2 = xc + (int)(radius*sin(4*M_PI/3.0)), y2 = yc - (int)(radius*cos(4*M_PI/3.0)); 

    recur_sierpinski(0,x0,y0,x1,y1,x2,y2);

    draw_close();
}