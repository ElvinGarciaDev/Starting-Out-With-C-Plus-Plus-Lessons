#ifndef CLASS_H
#define CLASS_H

template <class T>
class Elvin
{
    private:
        T first, second;
    public:
        //default constructor
        Elvin(T a, T b)
        {  first = a;
           second = b; }
        
        T bigger(); //defined in definition.cpp


};

#endif