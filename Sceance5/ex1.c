#include "draw.h"

#define FILE_NAME "ex1.svg"

void draw_part_bottom_right(){
    int moving_y, moving_x;
    /*for(int i=0;i<=20;++i){
        moving_x = 400 - 10*i;
        moving_y = 200 + (int)sqrt(200*200 - (moving_x-200)*(moving_x-200));
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }*/
    for(int i=0;i<=20;++i){
        moving_y = 200 + 10*i;
        moving_x = 10*i;
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }
}

void draw_part_top_right(){
    int moving_y, moving_x;
    /*for(int i=0;i<=20;++i){
        moving_x = 400 - 10*i;
        moving_y = 200 - (int)sqrt(200*200 - (moving_x-200)*(moving_x-200));
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }*/
    for(int i=0;i<=20;++i){
        moving_y = 10*i;
        moving_x = 200 + 10*i;
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }
}

void draw_part_bottom_left(){
    int moving_y, moving_x;
    /*for(int i=0;i<=20;++i){
        moving_x = 10*i;
        moving_y = 200 + (int)sqrt(200*200 - (moving_x-200)*(moving_x-200));
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }*/
    for(int i=0;i<=20;++i){
        moving_y = 200 + 10*i;
        moving_x = 400 - 10*i;
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }
}
void draw_part_top_left(){
    int moving_y, moving_x;
    /*for(int i=0;i<=20;++i){
        moving_x = 10*i;
        moving_y = 200 - (int)sqrt(200*200 - (moving_x-200)*(moving_x-200));
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }*/
    for(int i=0;i<=20;++i){
        moving_y = 10*i;
        moving_x = 200 - 10*i;
        draw_line(200,moving_y,moving_x,200, 2, 255,0,0);
    }
}

void draw_test(){
    draw_line(0,0,0,200,2,0,255,0);
}

int main(){
    draw_init(FILE_NAME, 400,400);

    draw_part_top_left();
    draw_part_bottom_left();
    draw_part_bottom_right();
    draw_part_top_right();

    draw_close();
}