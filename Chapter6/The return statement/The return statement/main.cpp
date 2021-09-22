// This program uses a function to perform division. If division
// by zero is detected, the function returns.
#include <iostream>
using namespace std;

//Function prototype.
void divide(double, double);

int main()
{
    double num1, num2;
    
    cout << "Enter two numbers and I will divide the first\n";
    cout << "number by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2); //passing the parameters with the # users entered
    return 0;
}

//***************************************************************
// Definition of function divide.                                *
// Uses two parameters: arg1 and arg2. The function divides arg1 *
// by arg2 and shows the result. If arg2 is zero, however, the   *
// function returns.                                            *
//***************************************************************

void divide(double arg1, double arg2)
{
    if (arg2 == 0.0)        //If number 2 is the same as 0. the function will stop
    {
        cout << "Sorry, I cannot divide by Zero.\n";
        return;    // Stops the function if this is true
    }
    cout << "The quotient is " << (arg1 / arg2) << endl;  //is num2 is not 0 this runs.
}
