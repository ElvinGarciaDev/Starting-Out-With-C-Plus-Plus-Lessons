#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include <string>
using namespace std;

//The automobile class holds general data
//about an automobile in inventory.
class AutoMobile
{
    private:
        string make;    //car make
        int model;      //Car year model
        int mileage;    //Car mileage
        double price;   //Car price

    public:
        //Default constructor
        AutoMobile()
        { make = "";
          model = 0;
          mileage = 0;
          price = 0.0; }

        //Constructor
        AutoMobile(string autoMake, int autoModel, int autoMileage, double autoPrice)
        {   make = autoMake;
            model = autoModel;
            mileage = autoMileage;
            price = autoPrice; }

        //Accessors
        string getMake() const
            {  return make; }

        int getModel() const
        {  return model; }

        int getMileage() const
            {  return price; }
        
        double getPrice() const
            {  return price; }
};

#endif