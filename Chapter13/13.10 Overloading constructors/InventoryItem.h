// This class has overloaded constructors.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
using namespace std;

class InventoryItem
{
    private:
        string description; //The item description
        double cost;        //Item cost
        int units;          //The number of units
    public:
        //Constructor #1
        InventoryItem()
            { //Initialize descprtion, cost, and units.
                description = "";
                cost = 0.0;
                units = 0; }
            
            //Constructor #2
            InventoryItem(string desc)
            {   //Assign the value to descroption
                description = desc;

                //Omotoalize cost and units.
                cost = 0.0;
                units = 0; }

            //COnstructor #3
            InventoryItem(string desc, double c, int u)
            {   //assign values to description, cost, and units
                description = desc;
                cost = c;
                units = u; }

            //Mutaor functions
            void setDescrption(string d)
                { description = d; }

            void setCost(double c)
                { cost = c; }

            void setUnits(int u)
                { units = u; }

            //Accessor functions
            string getDecroption() const
                { return description; }

            double getCost() const
                { return cost; }

            int getUnits() const
                { return units; }
};
#endif