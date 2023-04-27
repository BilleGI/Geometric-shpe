#include "rectangle.h"
#include <iostream>


void check(double& mean)
{
    while(mean <= 0)
    {
        std::cout << "Enter the correct mean: " << std::endl;
        std::cin >> mean;
    }
}

Rectangle::Rectangle() : Figure()
{
    std::cout << "Enter the width: ";
    std::cin >> width;
    check(width);
    std::cout << "Enter the height: ";
    std::cin >> height;
    check(height);
}

double Rectangle::square()
{
    return width*height;
}

void Rectangle::firstCoordinate()
{
    std::cout << "x1 = " << coordinateX - (width / 2) <<
        " y1 = " << coordinateY + (height / 2) << std::endl;
}

void Rectangle::secondCoordinate()
{
    std::cout << "x2 = " << coordinateX + (width / 2) <<
        " y2 = " << coordinateY + (height / 2) << std::endl;
}

void Rectangle::thirdCoordinate()
{
    std::cout << "x3 = " << coordinateX + (width / 2) <<
         " y3 = " << coordinateY - (height / 2) << std::endl;
}

void Rectangle::fourthCoordinate()
{
    std::cout << "x4 = " << coordinateX - (width / 2) <<
        " y4 = " << coordinateY - (height / 2) << std::endl;
}
