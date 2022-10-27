#include "imageio.h"
#include <iostream>

void box(int image[MAX_H][MAX_W], int width, int height){
    for(int x = (0.25 * height); x < (0.75 * height + 1); x++){
        for(int y = (0.25 * width); y < (0.75 * width + 1); y++){
            image[x][y] = 255;
        }
    }
}

void frame(int image[MAX_H][MAX_W], int width, int height){
    for(int y = (0.25 * width); y < (0.75 * width); y++){
        image[int(0.25 * height)][y] = 255;
        image[int(0.75 * height)][y] = 255;
    }
    for(int x = (height * 0.25); x < (0.75 * height); x++){
        image[x][int(0.25 * width)] = 255;
        image[x][int(0.75 * width)] = 255;
    }
}