#ifndef CAR_H
#define CAR_H
#include "Automobile.h" 
#include <string>
using namespace std;

//The car class represents a car.
class Car : public AutoMobile
{
    private:
        int doors;

    public:
        //Default constructor
        Car() : AutoMobile()
        {  doors = 0; }

        //Constructor #2
        Car(string carMake, int carModel, int CarMilleage, double carPrice, int carDoors) : AutoMobile(carMake, carModel, CarMilleage, carPrice)
            {  doors = carDoors; }

        //Accessort for door
        int getDoors()
        {  return doors; }

};

#endif