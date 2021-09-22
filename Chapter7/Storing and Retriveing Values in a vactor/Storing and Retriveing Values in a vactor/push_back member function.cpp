//This program stores, in two arrays, the hours worked by 5 employees
//and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours; //hours is an empty vector
    vector<double> payRate;  //payRate is an emtpy vector
    int numEmployees;        //The nu,ber of employees
    

    //Get the number of employees.
    cout << "How many employees do you have: ";
    cin >> numEmployees;
    
    //intput the pay roll data
    cout << "Enter the hours worked by " << numEmployees;
    cout << " Employees and their hourly rates.\n";
    
    for (int i = 0; i < numEmployees; i++)
    {
        int tempHours;  //To hold the number of hours entered
        double tempRates; //To hold the pay rate entered
        cout << "Hours worked by employee #" << (i + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); //Add an element to hours
        cout << "Hourly pay rate for employee #" << (i + 1) << ": ";
        cin >> tempRates;
        payRate.push_back(tempRates); //Add an element to payRate
    }
    
    // Display each employee's gross pay.
     cout << "Here is the gross pay for each employee:\n";
     cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < numEmployees; i++)
    {
        double grossPay = hours[i] * payRate[i];
        cout << "Employee #" << (i + 1);
        cout << ": $" << grossPay << endl;
    }
    
    return 0;
}
