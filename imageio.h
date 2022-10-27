#pragma once
#include <string>

const int MAX_H = 512;
const int MAX_W = 512;

void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(std::string filename, int image[MAX_H][MAX_W], int height, int width); 
void invert(int image[MAX_H][MAX_W], int width, int height);
void invert_half(int image[MAX_H][MAX_W], int width, int height);
void frame(int image[MAX_H][MAX_W], int width, int height);
void box(int image[MAX_H][MAX_W], int width, int height);
void set(int image[MAX_H][MAX_W], int width, int height, int out[MAX_H][MAX_W]);
void scale(int image[MAX_H][MAX_W], int width, int height, int out[MAX_H][MAX_W]);
void overlap(int image[MAX_H][MAX_W], int width, int height);