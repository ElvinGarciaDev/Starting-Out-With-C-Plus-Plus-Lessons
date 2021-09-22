//using setpressision and setw.  This program asks for sales amounts for 3 days. The total sales are calculated and displayed in a table.

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    double day1, day2, day3, total;
    
    // get the sales for each day
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day3: ";
    cin >> day3;
    
    //calculate the totoal slaes
    total = day1 + day2 + day3;
    
    //display the sales amounts
    cout << "\nSales Amounts\n";
    cout << "______________\n";
    cout << setprecision(5);
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;
    
    

    return 0;
}




/*
showpoint manipulator
double x = 123.4, y = 456.0;
cout << setprecision(6) << showpoint << x << endl;
cout << y << endl;
*/


/*
right and left manipulators

double a = 146.789, b = 24.2, c = 1.783;
cout << left << setw(10) << a << endl;
cout  << setw(10) << b << endl;
cout << setw(10) << c << endl;

*/

