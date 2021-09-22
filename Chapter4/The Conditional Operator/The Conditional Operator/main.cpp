// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts hours to 5 if less than 5 hours were worked.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const double pay_rate = 50.0; //Hourly pay rate
    const int min_hours = 5;      //Minimum billable hours
    double hours, charges;        //Hours worked, Total charges
    
    //Get the hours worked.
    cout << "How many hours were worked? ";
    cin >> hours;
    
    //Determine the hours worked for.
    hours = hours < min_hours ? min_hours : hours;
    
    //calculate and display the charges.
    charges = pay_rate * hours;
    cout << setprecision(2) << showpoint << fixed
        << "The charges are $" << charges << endl;
    
    
    return 0;
}
