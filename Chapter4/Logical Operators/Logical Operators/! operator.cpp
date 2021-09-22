// This program demonstrates the logical || operator.
//Program 4-16 performs different tests to qualify a person for a loan. This one determines if the customer earns at least $35,000 per year, or has been employed for more than five years.


#include <iostream>
using namespace std;


int main ()
{

    cout << "This program performs tests to determine if you qualify for a loan" << endl;
    cout << "Press enter to continue. \n";
    cin.get();
    
    //Constants for minimum income and years
    const double min_income = 35000.0;
    const int min_years = 5;
    
    double income; //Annual income
    int years;    //Years at the current job
    
    //Get the annuel income
    cout << "What is your annuel income? ";
    cin >> income;
    
    //Get the number of years at the current job.
    cout << "How many years have you worked at your current job? ";
    cin >> years;
    
    //Determine the users loan qualifications
    if (!(income >= min_income || years >= min_years))
    {
        cout << "You must earn at least $" << min_income << " or have been employed for than " << min_years << " years to qualify.\n ";
       
    }
    else
    {
        cout << "You qualify.\n ";
    }
    
    
    
    return 0;
}
