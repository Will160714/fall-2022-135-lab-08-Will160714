#include "imageio.h"
#include <string>
#include <cmath>

void set(int img[MAX_H][MAX_W], int w, int h, int out[MAX_H][MAX_W]){
    for(int row = 0; row < h; row++) {
        for(int col = 0; col < w; col++) {
            out[row][col] = img[row][col];
        }
    }
}
void invert(int image[MAX_H][MAX_W], int width, int height){
    for(int x = 0; x < height; x++){
        for(int y = 0; y < width; y++){
            image[x][y] = abs(image[x][y] - 255);
        }
    }
}

void invert_half(int image[MAX_H][MAX_W], int width, int height){
    for(int x = 0; x < height; x++){
        for(int y = width/2; y < width; y++){
            image[x][y] = abs(image[x][y] - 255);
        }
    }
}