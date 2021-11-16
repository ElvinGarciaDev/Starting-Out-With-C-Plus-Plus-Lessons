// This program demonstrates passing arguments to a base
// class constructor.
#include <iostream>
#include "Cube.h"
using namespace std;

int main()
{
    double cubeWidth;   //To hold the cube's widdth
    double cubeLength;  //Hold the cubes length
    double cubeHeight;  //Hold the cubes height

        // Get the width, length, and height of
        // the cube from the user.
        cout << "Enter the dimensions of a cube:\n";
        cout << "Width: ";
        cin >> cubeWidth;
        cout << "Length: ";
        cin >> cubeLength;
        cout << "Height: ";
        cin >> cubeHeight;

        //Define a cube object and use the dimenstions
        //entered by the user
        Cube myCube(cubeWidth, cubeLength, cubeHeight);

        // Display the Cube object's properties.
        cout << "Here are the cube's properties:\n";
        cout << "Width: " << myCube.getWidth() << endl;
        cout << "Length: " << myCube.getLength() << endl;
        cout << "Height: " << myCube.getHeight() << endl;
        cout << "Base area: " << myCube.getArea() << endl;
        cout << "Volume: " << myCube.getVolume() << endl;



    return 0;
}