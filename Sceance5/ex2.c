#include <math.h>

#include "draw.h"

int colors[] = {88,229,0, 102,196,0, 117,164,0, 132,131,0, 146,99,0, 161,66,0, 176,34,0, 191,2,0};

void draw_poly(int n, int xc, int yc, int radius, int r, int g, int b){
    int x0 = xc+radius, y0=yc, last_x = x0, last_y = y0, temp_x, temp_y;
    for(int i=1; i<n;++i){
        temp_x = xc + (int)(radius * cos(i*2*M_PI/(double)n));
        temp_y = yc + (int)(radius * sin(i*2*M_PI/(double)n));

        draw_line(last_x, last_y, temp_x, temp_y, 2, r, g, b);

        last_x = temp_x; last_y = temp_y;
    }
    draw_line(x0,y0,last_x,last_y, 2, r, g, b);
}


int main(){
    draw_init("ex2.svg", 400, 400);

    //draw_poly(7, 200,200, 100, 0,255,0);

    for(int y = 25, i = 0; y < 400; y+=50, ++i){
        for(int x = 25, n = 3; x < 400; x += 50, ++n){
            draw_poly(n, x, y, 20, colors[3*i], colors[3*i+1], colors[3*i+2]);
        }
    }

    draw_close();
}