//Program 4-21 further demonstrates how relational operators can be used with string objects.
//// This program uses relational operators to compare a string entered by the user with valid stereo part numbers.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{

    const double price_a = 249.0, price_b = 299.0;
    
    string part_num;  //Holds a stero part number
    
    //Display avaliable parts and get the user's selection
    cout << "The stero part numbers are: \n"
         << "Boom Box: part number S-29A \n"
         << "Shelf Model: part number S-29B \n"
         << "Enter the part number of the stero you wish to purchase: ";
    cin >> part_num;
    
    //set the numeric output formatting
    cout << setprecision(2) << showpoint << fixed;
    
    //Dtermine and display the correct price
    if (part_num == "S-29A")
        cout << "The price is $" << price_a << endl;
    else if (part_num == "S-29B")
        cout << "The price is $" << price_b << endl;
    else
        cout << part_num << " is not a valid part number. \n";
    
    
    return 0;
}
