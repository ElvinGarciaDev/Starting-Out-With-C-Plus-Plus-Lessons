// Specification file for the Rectangle class.
// This version has a constructor.
#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle class declaration. 

 class Rectangle
{
    private:
        double width;
        double length; 
    public:
        Rectangle();
        void setWidth(double); 
        void setLength(double); 
        double getWidth() const; 
        double getLength() const; 
        double getArea() const;
}; 

#endif
