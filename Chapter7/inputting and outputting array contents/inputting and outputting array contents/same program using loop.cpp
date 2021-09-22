//Program 7-1 could be simplified by using two for loops: one for inputting the values into the array and another for displaying the contents of the array.
//  same program using loop.cpp
#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; //Number of employees
    int hours[NUM_EMPLOYEES];    //Create array for each employee's hours
    int count;                   //loop counter
    
    //Inout the hours worked.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter the hours worked by employee " << (count + 1) << ": ";
        cin >> hours[count];        // store the hours input in the array
    }
    
    
    //Display the content of the array.
    cout << "The hours you entered are:";
    for (count = 0; count < NUM_EMPLOYEES; count ++)
    {
        cout << " " << hours[count];
    }
    cout << endl;
    
    return 0;
}


