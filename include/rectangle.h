#pragma once
#include "figure.h"

class Rectangle : public Figure
{
    double width;
    double height;
public:
    Rectangle();
    double square();
    void firstCoordinate();
    void secondCoordinate();
    void thirdCoordinate();
    void fourthCoordinate();
};
