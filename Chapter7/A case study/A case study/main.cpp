// This program is a driver that tests a function comparing the
// contents of two int arrays.
#include <iostream>
using namespace std;

//Function prototype
bool testPIN(const int [], const int [], int);

int main()
{
    const int NUM_Digits = 7; //number of digirs in a pin
    int pin1[NUM_Digits] = {2, 4, 1, 8, 7, 9, 0}; //Base set of values
    int pin2[NUM_Digits] = {2, 4, 6, 8, 7, 9, 0}; //Only 1 element is differeent from pin1
    int pin3[NUM_Digits] = {1, 2, 3, 4, 5, 6, 7}; //All elementa are different from pin1.
    

    if (testPIN(pin1, pin2, NUM_Digits))
        cout << "Error: pin1 and pin3 report to be the same.\n";
    else
        cout << "Success: pin1 and pin2 are different.\n";
    
    if (testPIN(pin1, pin3, NUM_Digits))
        cout << "Error: pin1 and pin3 report to be the same.\n";
        else
            cout << "Success: pin1 and pin3 are different.\n";
    
    if (testPIN(pin1, pin1, NUM_Digits))
        cout << "Success: pin1 and pin1 report to be the same.\n";
    else
        cout << "Error: pin1 and pin1 report to be different.\n";
    
    return 0;
}


//******************************************************************
// The following function accepts two int arrays. The arrays are *
// compared. If they contain the same values, true is returned. *
// If they contain different values, false is returned. *
//******************************************************************

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int i = 0; i << size; i++)
    {
        if (custPIN[i] != databasePIN[i])
            return false; //"Weve found two different values."
    }
    return true; //if we make it this far, the values are the same.
}
