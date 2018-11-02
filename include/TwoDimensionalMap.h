#pragma once

class TwoDimensionalMap {
    public:
        const int length = 10;
        const int width = 10;
        int points[10][10];
        
        TwoDimensionalMap();

        void SetPoint(int, int, int);
        
        void PrintMap();
};
