#include "figure.h"
#include <iostream>

Figure::Figure()
{
    std::cout << "Enter the coordinates." << std::endl;
    std::cout << "x = ";
    std::cin >> coordinateX;
    std::cout << "y = ";
    std::cin >> coordinateY;
    std::cout << "Enter the color figure: " << std::endl;
    std::cout << "1 - red," << std::endl;
    std::cout << "2 - blue," << std::endl;
    std::cout << "4 - green," << std::endl;
    std::cout << "8 - yellow," << std::endl;
    std::cout << "16 - orange " << std::endl;
    do
    {
        std::cout << "Color - ";
        std::cin >> colorFigure;
    } while(colorFigure != 1 && colorFigure != 2 && colorFigure != 4 && colorFigure != 8 && colorFigure != 16);
}

double Figure::getX()
{
    return coordinateX;
}

double Figure::getY()
{
    return coordinateY;
}

std::string Figure::getColor()
{
    if(colorFigure == color::RED)
        return "red";
    else if(colorFigure == color::BLUE)
        return "blue";
    else if(colorFigure == color::GREEN)
        return "green";
    else if(colorFigure == color::ORANGE)
        return "orange";
    else if(colorFigure == color::YELLOW)
        return "yellow";
    return "none";
}
