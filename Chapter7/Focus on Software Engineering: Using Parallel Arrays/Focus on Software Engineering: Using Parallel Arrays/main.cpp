// This program uses two parallel arrays: one for hours 2
// worked and one for pay rate.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; //number of employees
    int hours[NUM_EMPLOYEES];    //Holds hours worked
    double payRate[NUM_EMPLOYEES];  //holds pay rates
    
    //input the hours worked and the hourly pay rate.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
         << " employees and their\n"
         << "hourly pay rates.\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours worked by employee #" << (i + 1 ) << ": ";
        cin >> hours[i];
        cout << "Hourly pay rate for employee #" << (i + 1) << ": ";
        cin >> payRate[i];
    }
    
    //Display each employee's gros pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        double grossPay = hours[i] * payRate[i];
        cout << "Employee #" << (i + 1);
        cout << ": $" << grossPay << endl;
    }
    
    return 0;
}
