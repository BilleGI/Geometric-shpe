#pragma once
#include <string>

class Figure
{
    enum color
    {
        RED = 1,
        BLUE = 2,
        GREEN = 4,
        YELLOW = 8,
        ORANGE = 16
    };
    int colorFigure = 0;
protected:
    double coordinateX = 0;
    double coordinateY = 0;
public:
    Figure();
    double getX();
    double getY();
    std::string getColor();
};
