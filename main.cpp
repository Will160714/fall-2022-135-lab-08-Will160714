#include <iostream>
#include "imageio.h"
#include <string>

int main(){
    std::string input = "inImage.pgm";
    int img[MAX_H][MAX_W];
    int h, w;
    int out[MAX_H][MAX_W];
    readImage(input, img, h, w); 
    set(img, w, h, out);

    std::cout << "Task A" << std::endl;
    invert(out, w, h);
    writeImage("taskA.pgm",out, h, w);
    set(img, w, h, out);

    std::cout << "Task B" << std::endl;
    invert_half(out, w, h);
    writeImage("taskB.pgm",out, h, w);
    set(img, w, h, out);

    std::cout << "Task C" << std::endl;
    box(out, w, h);
    writeImage("taskC.pgm",out, h, w);
    set(img, w, h, out);

    std::cout << "Task D" << std::endl;
    frame(out, w, h);
    writeImage("taskD.pgm",out, h, w);
    set(img, w, h, out);

    std::cout << "Task E" << std::endl;
    int out2[MAX_H][MAX_W];
    scale(img, w, h, out2);
    int height = 2* h;
    int width = 2 * w;
    writeImage("taskE.pgm", out2, height, width);

    std::cout << "Task F" << std::endl;
    overlap(out, w, h);
    writeImage("taskF.pgm",out, h, w);

    return 0;
}