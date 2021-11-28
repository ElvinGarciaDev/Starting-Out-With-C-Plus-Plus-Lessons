// This program demonstrates Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double width;
    double length;

    //Creat a rectangle object.
    Rectangle myRectangle;

    //get the width and length
    cout << "Enter the rectangle's width: ";
    cin >> width;
    cout << "Enter the rectangles length: ";
    cin >> length;

    //Store these values in the rectangles object
    try
    {
        myRectangle.setWidth(width);
        myRectangle.setLength(length);
        cout << "The area of the rectangle is "
             << myRectangle.getArea() << endl;
    }
    catch (Rectangle::NegativeSize)
    {
        cout << "Error: A negative value was entered.\n";
    }
    cout << "End of the program.\n";

    return 0;
}