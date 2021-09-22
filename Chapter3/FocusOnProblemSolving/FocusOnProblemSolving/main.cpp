/**
 General Crates, Inc. builds custom-designed wooden crates. With materials and labor, it costs GCI $0.23 per cubic foot to build a crate. In turn, they charge their customers $0.50 per cubic foot for the crate. You have been asked to write a program that calculates the volume (in cubic feet), cost, customer price, and profit of any crate GCI builds.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const double cost_Per_cubic_foot = 0.23;
    const double charge_per_cubic_foot = 0.5;
  
    
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;
    
    // Set the desired output formatting for numberts.
    cout << setprecision(2) << fixed << showpoint;
    
    
    // prompt the user for the create's length, width, and height.
    cout << " Please enter the crate's length:\n ";
    cin >> length;
    cout <<"Please enter the crate's width:\n ";
    cin >> width;
    cout <<"Please enter the crate's height: " << endl;
    cin >> height;
    
    
    // Calculate the crate's volume, the cost to produce it, the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * cost_Per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;
    
    
    //Display the calculated data.
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "The cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    
    
    return 0;
}
