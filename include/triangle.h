#pragma once
#include "figure.h"

class Triangle :public Figure
{
    double edge;
public:
    Triangle();
    double getEdge();
    double square();
    double height();
    void firstCoordinates();
    void secondCoordinates();
    void thirdCoordinates();
    void fourthCoordinates();
};
