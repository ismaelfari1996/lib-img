#include "./lib/lib-include.h" // add to project
int main(){
    /**
     * This library have:
     * Canny
     * GaussianFilter
     * Sobel
     * svm implement
     * stb_image implement
    */
    //Example to call any class
    StbImageImplementation stb;
    Utility u;
    GaussianFilter g;
    Canny c;
    Sobel s;
    HistogramHandler h;
    int width, height;
    double** image=stb.imread("image.jpg",width,height);
    stb.imwrite("img.jpeg",image,width,height);
    u.free_memory(image,height);
    return 0;
}