#include "circle.h"
#include <iostream>

Circle::Circle() : Figure()
{
    std::cout << "Enter the radius: ";
    while(true)
    {
        std::cout << "r = ";
        std::cin >> radius;
        if(radius > 0)
            break;

        std::cout << "Enter the correct radius" << std::endl;
    }
}


double Circle::getRadius()
{
    return radius;
}

double Circle::square()
{
    return (pi*(radius*radius));
}

void Circle::firstCoordinates()
{
    std::cout << "x1 = " << coordinateX - radius <<
        " y1 = " << coordinateY + radius << std::endl;
}

void Circle::secondCoordinates()
{
    std::cout << "x2 = " << coordinateX + radius <<
        " y2 = " << coordinateY + radius << std::endl;
}

void Circle::thirdCoordinates()
{
    std::cout << "x3 = " << coordinateX + radius <<
        " y3 = " << coordinateY - radius << std::endl;
}

void Circle::fourthCoordinates()
{
    std::cout << "x4 = " << coordinateX - radius <<
        " y4 = " << coordinateY - radius << std::endl;
}
