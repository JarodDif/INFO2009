#include <math.h>

#include "draw.h"

#define THICKNESS 1
#define MAX_DEPTH 6

void recur_van_koch(int depth, int x0, int y0, int x1, int y1){
    if(depth > MAX_DEPTH){ //reached max depth
        draw_line(x0,y0,x1,y1,THICKNESS,0,0,0);
        return;
    }

    int dx = x1-x0, dy = y1-y0;

    int x2 = x0+dx/3, y2 = y0+dy/3, 
        x3 = x0+dx*2/3, y3 = y0+dy*2/3;

    dx = x3-x2; dy = y3-y2;

    double angle = atan2(dy,dx) - M_PI/3, norm = sqrt(dx*dx+dy*dy);
    int new_dx = (int)(norm*cos(angle)), new_dy = (int)(norm*sin(angle));
    int xs = x2+new_dx, ys = y2+new_dy;

    recur_van_koch(depth+1, x0,y0,x2,y2);
    recur_van_koch(depth+1, x2,y2,xs,ys);
    recur_van_koch(depth+1, xs,ys,x3,y3);
    recur_van_koch(depth+1, x3,y3,x1,y1);
}

void van_koch(int x0, int y0, int x1, int y1, int x2, int y2){
    recur_van_koch(0, x0,y0,x1,y1);
    recur_van_koch(0, x1,y1,x2,y2);
    recur_van_koch(0, x2,y2,x0,y0);
}

int main(){
    draw_init("ex4.svg", 400, 400);

    int xc = 200, yc = 200, radius = 100;

    int x0 = xc, y0 = yc-radius, 
        x1 = xc + (int)(radius*sin(2*M_PI/3.0)), y1 = yc - (int)(radius*cos(2*M_PI/3.0)), 
        x2 = xc + (int)(radius*sin(4*M_PI/3.0)), y2 = yc - (int)(radius*cos(4*M_PI/3.0)); 

    van_koch(x0,y0,x1,y1,x2,y2);

    draw_close();
}