// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; //number of employees
    int hours[NUM_EMPLOYEES];    //Array to hold hours
    double payrate;              //Hourly pay rate
    double grossPay;             //to hold the gross pay
    
    //input the hours worked.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees who all earned the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index]; //whatever the user enters will be stored in element 0. and so on,
    }
    
    //Input the hourly rate for all employees.
    cout << "Enter the hourly pay rate for all the employees: ";
    cin >> payrate;
    
    // Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Employee #" << (index +1);
        cout << ": $" << grossPay << endl;
    }
    
    
    return 0;
}
