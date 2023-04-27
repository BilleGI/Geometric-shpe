#pragma once
#include "figure.h"

class Circle: public Figure
{
    double pi = 3.14;
    double radius = 0;
public:
    Circle();

    double getRadius();

    double square();

    void firstCoordinates();
    void secondCoordinates();
    void thirdCoordinates();
    void fourthCoordinates();
};
