#include"square.h"
#include <iostream>

Square::Square() : Figure()
{
    std::cout << "Enter the size of the edge of the square: " << std::endl;;
    while(true)
    {
        std::cout << "a = ";
        std::cin >> edge;
        if(edge > 0)
            break;

        std::cout << "Enter the correct edge." << std::endl;
    }
}

double Square::getEdge()
{
    return edge;
}

double Square::square()
{
    return edge*edge;
}

void Square::firstCoordinates()
{
    std::cout << "x1 = " << coordinateX - (edge/2) <<
        " y1 = " << coordinateY + (edge/2) << std::endl;
}

void Square::secondCoordinates()
{
    std::cout << "x2 = " << coordinateX + (edge/2) <<
        " y2 = " << coordinateY + (edge/2) << std::endl;
}

void Square::thirdCoordinates()
{
    std::cout << "x3 = " << coordinateX + (edge/2) <<
        " y3 = " << coordinateY - (edge/2) << std::endl;
}

void Square::fourthCoordinates()
{
    std::cout << "x4 = " << coordinateX - (edge/2) <<
        " y4 = " << coordinateY - (edge/2) << std::endl;
}
