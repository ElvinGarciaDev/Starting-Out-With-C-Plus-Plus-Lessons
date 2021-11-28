// Specification file for the Rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
        double width;
        double length;
    public:
        //exception class for a negative width
        class NegativeWidth()
        {}; //Empty class decleation

        class NegativeLength()
        {};
        

        //Default constructor
        Rectangle()
            { width = 0.0; length = 0.0; }

        //Mutator functions
        void setWidth(double);
        void setLength(double);

        //Accessor functions
        double getWidth() const
            {return width; }

        double getLength() const
            { return length; }

        double getArea() const
        {  return width * length;  }
};


#endif