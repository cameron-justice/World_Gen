#include <stdio.h>
#include "TwoDimensionalGeneration.h"
#include <math.h>

double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

int main(void){
    
    TwoDimensionalGenerator mapGen;
    TwoDimensionalMap map = mapGen.GenerateMap();
    map.PrintMap();
    
    return 0;
}
