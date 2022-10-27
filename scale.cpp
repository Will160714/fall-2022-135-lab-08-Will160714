#include "imageio.h"
#include <iostream>

void scale(int image[MAX_H][MAX_W], int width, int height, int out[MAX_H][MAX_W]){
    for(int x = 0; x < height; x++){
        for(int y = 0; y < width; y++){
            out[x*2][y*2] = image[x][y];
            out[(x*2 + 1)][(y*2 + 1)] = image[x][y];
            out[x*2 + 1][y*2] = image[x][y];
            out[x*2][y*2 + 1] = image[x][y];
        }
    }
}

void overlap(int image[MAX_H][MAX_W], int width, int height){
    int average = 0;
    for(int x = 0; x < height; x++){
        for(int y = 0; y < width; y++){
            if(x + 1 < height && y + 1 < width){
                average = (image[x][y] + image[x][y + 1] + image[x + 1][y] + image[x + 1][y + 1]) / 4;
                image[x][y] = average;
                image[x][y + 1] = average;
                image[x + 1][y] = average;
                image[x + 1][y + 1] = average;
            }
        }
    }
}