// This program demonstrates the Car, Truck, and SUV
// classes that are derived from the Automobile class.
#include <iostream>
#include <iomanip>
#include "Car.h"
#include "SUV.h"
using namespace std;

int main()
{
    //Create a car object for a used 2007 BMW with 50,000 miles, $15,000 price, with 4 dorrs
    Car car("BMW", 2007, 50000, 15000.0, 4);

    // Display the automobiles we have in inventory.
    cout << fixed << showpoint << setprecision(2);
    cout << "We have the following car in inventory:\n"
         << car.getModel() << " " << car.getMake()
         << " with " << car.getDoors() << " doors and " 
         << car.getMileage() << " miles.\nPrice: $"
         << car.getPrice() << endl << endl;


    // Create an SUV object for a used 2005 Volvo 
    // with 30,000 miles, priced at $18,000, with 5 passenger capacity.
    SUV suv("Volvo", 2005, 30000, 18000, 5);
    cout << fixed << showpoint << setprecision(2);
    cout << "We have the following car in inventory:\n"
         << suv.getModel() << " " << suv.getMake()
        << " with " << suv.getCapacity() << " doors and " 
         << suv.getMileage() << " miles.\nPrice: $"
         << suv.getPrice() << endl << endl;
    



    return 0;
}