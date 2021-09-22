/*
 Sometimes you want the user to determine the maximum value of the counter variable in a for loop, and therefore determine the number of times the loop iterates. For example, look at Program 5-10. This is another program that displays a list of numbers and their squares. Instead of displaying the numbers 1 through 10, this program allows the user to enter the minimum and maximum values to display.
 */

#include <iostream>
using namespace std;

int main ()
{

    int min_number, //Starting number tp square
        max_number; // Maximum number to square
    
    //Get the minimum and maxmimum values to display.
    cout << "I will display a table of numbers and their squares.\n"
         << "Enter the starting number: ";
    cin >> min_number;
    cout << "Enter the ending number: ";
    cin >> max_number;
    
    //Display the table.
    cout << "Number Number Squared\n"
         << "------------------------\n";
    
    for (int num = min_number; num <= max_number; num++)
        cout << num << "\t\t" << (num * num ) << endl;
    
    
    
    return 0;
}
