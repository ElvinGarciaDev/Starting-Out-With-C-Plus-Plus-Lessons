// This program demonstrates a class with overloaded constructors.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
    //Create an InventoryItem object and call 
    // the default constructor.
    InventoryItem item1;
    item1.setDescrption("Hammer");  //Set the description
    item1.setCost(6.96);            //Set the cost
    item1.setUnits(12);                //Set the units

    //Create an inventoryItem object and call 
    //COnstructor #2
    InventoryItem item2("pliers");

    //create an InventoryItem object and call
    //Constructor #3.
    InventoryItem item3("Wrench", 8.75, 20);

    cout << "The following items are in inventory:\n";
    cout << setprecision(2) << fixed << showpoint;

    //Display the data for item1
    cout << "Description: " << item1.getDecroption() << endl;
    cout << "Cost $" << item1.getCost() << endl;
    cout << "Units on Hand: " << item1.getUnits() << endl << endl;

    //Display the data for item1=2
    cout << "Description: " << item2.getDecroption() << endl;
    cout << "Cost $" << item2.getCost() << endl;
    cout << "Units on Hand: " << item2.getUnits() << endl << endl;

    //Display the data for item3
    cout << "Description: " << item3.getDecroption() << endl;
    cout << "Cost $" << item3.getCost() << endl;
    cout << "Units on Hand: " << item3.getUnits() << endl << endl;


    return 0;
}