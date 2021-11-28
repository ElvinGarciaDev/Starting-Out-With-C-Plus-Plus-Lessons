// This program handles the Rectangle class exceptions.
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double width;
    double length;
    bool tryAgain = true;   //glag to reread input

    Rectangle myRectangle;

    //get the rectangle width
    cout << "Enter the rectangle's width: ";
    cin >> width;

    //store the windth in the myRectangle object
    while (tryAgain)
    {
        try
        {
            myRectangle.setWidth(width);
            //if no eception was thrown, then the
            // next statement will execute
            tryAgain = false;
        }
        catch (Rectangle::NegativeWidth)
        {
            cout << "Please enter a nonnegative value: ";
            cin >> width;
        }
    }

    //Get the rectangles length
    cout << "Enter the rectangles length: ";
    cin >> length;

    //Store the length in the myRectangle object
    tryAgain = true;
    while (tryAgain)
    {
        try 
        {
            myRectangle.setLength(length)
            //if no exception was thrown, then the
            //next statement will ezecute
            tryAgain = false;
        }
        catch (Rectangle::NegativeLength)
        {
            cout << "Please enter a nonnegative value: ";
            cin >> length;
        }
    }

    //display the alrea of the rectangle
    cout << "The rectangle's area is " 
         << myRectangle.getArea() << endl;

    return 0;
}