#include <iostream>
#include<algorithm>
#include "figure.h"
#include "circle.h"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"

void check(std::string& command)
{
    while(true)
    {
        auto it = std::find_if(command.begin(), command.end(),[](const char &c)
        {
            return !std::isalpha(c);
        });
        if(it == command.end())
            return;

        std::cout << "Enter the correcr command: ";
        getline(std::cin, command);
    }
}

int main()
{
    std::cout << "Geometric shapes program." << std::endl;
    std::cout << "List command: " << std::endl;
    std::cout << "circle - display the parameters of the circle," << std::endl;
    std::cout << "triangle - display the parameters of the triangle," << std::endl;
    std::cout << "square - display the parameters of the square," << std::endl;
    std::cout << "rectangle - display the parameters of the rectangle." << std::endl;
    while(true)
    {
        std::string command;
        std::cout << "Enter the command: ";
        getline(std::cin, command);
        check(command);
        if (command == "end")
            break;
        else if(command == "circle")
        {
            Circle* circle = new Circle;
            std::cout << "The center of the circle: x = " << circle->getX() << " y = " << circle->getY() << std::endl;
            std::cout << "Color - " << circle->getColor() << std::endl;
            std::cout << "Area of the circle = " << circle->square() << std::endl;
            std::cout << "Coordinates of the descriptibiding rectangle: " << std::endl;
            circle->firstCoordinates();
            circle->secondCoordinates();
            circle->thirdCoordinates();
            circle->fourthCoordinates();
            delete circle;
            std::cin.get();
        }
        else if(command == "triangle")
        {
            Triangle* triangle = new Triangle;
            std::cout << "The center of the triangle: x = " << triangle->getX() << " y = " << triangle->getY() << std::endl;
            std::cout << "Color - " << triangle->getColor() << std::endl;
            std::cout << "Area of the triangle = " << triangle->square() << std::endl;
            std::cout << "Coordinates of the descriptibiding rectangle: " << std::endl;
            triangle->firstCoordinates();
            triangle->secondCoordinates();
            triangle->thirdCoordinates();
            triangle->fourthCoordinates();
            delete triangle;
            std::cin.get();
        }
        else if(command == "square")
        {
            Square* square = new Square;
            std::cout << "The center of the square: x = " << square->getX() << " y = " << square->getY() << std::endl;
            std::cout << "Color - " << square->getColor() << std::endl;
            std::cout << "Area of the square = " << square->square() << std::endl;
            std::cout << "Coordinates of the descriptibiding rectangle: " << std::endl;
            square->firstCoordinates();
            square->secondCoordinates();
            square->thirdCoordinates();
            square->fourthCoordinates();
            delete square;
            std::cin.get();
        }
        else if(command == "rectangle")
        {
            Rectangle* rectangle = new Rectangle;
            std::cout << "The center of the rectangle: x = " << rectangle->getX() << " y = " << rectangle->getY() << std::endl;
            std::cout << "Color - " << rectangle->getColor() << std::endl;
            std::cout << "Area of the square = " << rectangle->square() << std::endl;
            std::cout << "Coordinates of the descriptibiding rectangle: " << std::endl;
            rectangle->firstCoordinate();
            rectangle->secondCoordinate();
            rectangle->thirdCoordinate();
            rectangle->fourthCoordinate();
            delete rectangle;
            std::cin.get();
        }
    }
    return 0;
}
