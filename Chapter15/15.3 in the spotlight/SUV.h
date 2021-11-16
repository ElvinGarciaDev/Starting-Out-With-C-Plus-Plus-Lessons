#ifndef SUV_H
#define SUV_H
#include "Automobile.h"
#include <string>
using namespace std;


class SUV : public AutoMobile
{
    private:
        int capacity;   //Passanger capacity
    public:
        //Default constructor
        SUV() : AutoMobile()
        {  capacity = 0; }

        //2nd constructor
        SUV(string carMake, int carModel, int CarMilleage, double carPrice, int passangers) : AutoMobile(carMake, carModel, CarMilleage, carPrice)
        {  capacity = passangers; }

        //Accessor for capacity
        int getCapacity()
        {  return capacity; }



};

#endif