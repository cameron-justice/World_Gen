#include <stdio.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "TwoDimensionalGeneration.h"

TwoDimensionalGenerator::TwoDimensionalGenerator(){
    srand(time(NULL));
}

TwoDimensionalMap TwoDimensionalGenerator::GenerateMap(){

    TwoDimensionalMap map;
    for(int i = 0; i < map.length; i++){
        for(int j = 0; j < map.width; j++){
            map.SetPoint(i, j, (rand() % 10));
        }
    }

    return map;
}
