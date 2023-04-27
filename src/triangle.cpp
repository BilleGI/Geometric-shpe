#include "triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle() : Figure()
{
    std::cout << "Enter the edge size of an equilateral triangle." << std::endl;
    while(true)
    {
        std::cout << "a = ";
        std::cin >> edge;
        if (edge > 0)
            break;
        std::cout << "Enter the correct size."<< std::endl;
    }
}

double Triangle::getEdge()
{
    return edge;
}

double Triangle::square()
{
    return ((pow(edge, 2) * sqrt(3)) / 4);
}

void Triangle::firstCoordinates()
{
    std::cout << "x1 = " << coordinateX - (edge / 2) <<
        " y1 = " << coordinateY + (height() / 2) << std::endl;
}

void Triangle::secondCoordinates()
{
    std::cout << "x2 = " << coordinateX + (edge / 2) <<
        " y2 = " << coordinateY + (height() / 2) << std::endl;;
}

void Triangle::thirdCoordinates()
{
    std::cout << "x3 = " << coordinateX + (edge / 2) <<
        " y3 = " << coordinateY - (height() / 2) << std::endl;
}

void Triangle::fourthCoordinates()
{
    std::cout << "x4 = " << coordinateX - (edge / 2) <<
        " y4 = " << coordinateY - (height() / 2) << std::endl;
}

double Triangle::height()
{
    return ((edge*sqrt(3))/2);
}
