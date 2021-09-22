//This program stores, in a two vectors, the hours worked by 5
// Employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>  //Needed to define vectos
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;    //Number of employees
    vector<int> hours(NUM_EMPLOYEES); //a vactor of intergers
    vector<double> payRate(NUM_EMPLOYEES); //a vector of doubles
    
    //Input the data.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES;
    cout << " Employees and their hourly rate.\n";
    
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours worked by employee #" << (i + 1) << ": ";
        cin >> hours[i];
        cout << "Hourly pay rate for employee #" << (i + 1) << ": ";
        cin >> payRate[i];
    }
    
    
    
    //Display each employee's gross pay.
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        double grossPay = hours[i] * payRate[i];
        cout << "Employee #" << (i + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}
