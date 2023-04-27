#pragma once
#include "figure.h"

class Square:public Figure
{
    double edge;
public:
    Square();
    double getEdge();
    double square();
    void firstCoordinates();
    void secondCoordinates();
    void thirdCoordinates();
    void fourthCoordinates();
};
