#include <iostream>
using namespace std;
#include "Sally.h"

Sally::Sally() //emtpy contructor
{}

Sally::Sally(int a)
{
    num = a;
}

Sally Sally::operator+(Sally aso)
{
    Sally BrandNew;
    BrandNew.num = num + aso.num;
    return(BrandNew);

}
