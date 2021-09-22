// This program demonstrates a two-dimensional array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_DIVS = 3;             //Number of divisions
    const int NUM_QTRS = 4;             //Number of quarters
    double sales[NUM_DIVS][NUM_QTRS]; //Array with 3 rows and 4 columns.
    double totalSales = 0;             //To hold the total sales
    
    
    cout << "This program will calculate the total sales of all the company's divisions.\n";
    cout << "Enter the following sales information:\n\n";
    
    //Nested loops to fill the array with quarterly sales figures for each division.
    for (int div = 0; div < NUM_DIVS; div++)
    {
        for (int qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            cout << "Division " << (div + 1);
            cout << ", Quarter " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
        }
        cout << endl; //print blank line
    }
    
    //Nested loops used to add all the elements.
    for (int div = 0; div < NUM_DIVS; div++)
    {
        for (int qtr = 0; qtr < NUM_DIVS; qtr++)
            totalSales += sales[div][qtr];
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for the company are : $";
    cout << totalSales << endl;
    return 0;
}
