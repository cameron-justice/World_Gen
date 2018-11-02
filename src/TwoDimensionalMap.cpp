#include "TwoDimensionalMap.h"
#include <cstdio>

TwoDimensionalMap::TwoDimensionalMap()    
{
   
}

void TwoDimensionalMap::SetPoint(int x, int y, int value){
    points[x][y] = value;    
}

void TwoDimensionalMap::PrintMap(){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < width; j++){
            printf("%d", points[i][j]);
        }
        printf("\n");
    }
}
