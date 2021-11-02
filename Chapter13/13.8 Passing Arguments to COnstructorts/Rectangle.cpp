// Implementation file for the Rectangle class.
// This version has a constructor that accepts arguments.#include "Rectangle.h" //Needed for the rectangle class
#include <iostream>    //Needed for cout
#include <cstdlib>     //Needed for the exit function  
#include "Rectangle.h" // Needed for Rectangle class


//***********************************************************
// The constructor initializes width and length to 0.0. *
//***********************************************************

Rectangle::Rectangle(double w, double len)
{
    width = w;
    length = len;
}

//************************************************** 
// setWidth assigns a value to the width member. * 
//**************************************************

void Rectangle::setWidth(double w)
{
    width = w;
}

//***************************************************
// setLength assigns a value to the length member. *
//***************************************************

void Rectangle::setLength(double len)
{
    length = len;

}

