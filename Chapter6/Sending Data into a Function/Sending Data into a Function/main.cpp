// This program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main ()
{
    cout << "I am passing serveral values to displayValue.\n";
    displayValue(5);    //call displayValue with argument 5
    cout << "Now I am back in main.\n";
    return 0;
}

//*********************************************************
// Definition of function displayValue. *
// It uses an integer parameter whose value is displayed. *
//*********************************************************

void displayValue(int num)
{
    cout << "The value is " << num << endl;
}
