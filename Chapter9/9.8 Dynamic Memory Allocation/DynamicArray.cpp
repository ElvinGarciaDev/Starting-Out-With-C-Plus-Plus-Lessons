// This program totals and averages the sales figures for any
// number of days. The figures are stored in a dynamically
// allocated array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr,    //To dinamically allocate an array
           total = 0.0,         //Accumulator
           average;             //To hold average sales
        int numDays;            //To hold the number of days of sales


    //Get the number of days of sales
    cout << "How many days of sales figures do you wish ";
    cout << "to process? ";
    cin >> numDays;

    //Dynamically allocate an array large enough to hold
    //that many days of sales amounts. 
    sales = new double[numDays];

    //Get the sales figures for each day. 
    cout << "Enter tje sales figurs below.\n";
    for (int i = 0; i < numDays; i++)
    {
        cout << "Day " << (i + 1) << ": ";
        cin >> sales[i];
    }

    //Calculate the total sales
    for (int i = 0; i < numDays; i++)
    {
        total += sales[i];
    }

    //Calculate the average sales per day
    average = total / numDays;

    //Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    //free fynamically allocated memory
    delete [] sales;
    sales = nullptr; //make sales a null pointer

    return 0;
}