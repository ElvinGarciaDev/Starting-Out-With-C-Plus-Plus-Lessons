                            //Designing a Count-Controlled Loop with the for Statement
// Your friend Amanda just inherited a European sports car from her uncle. Amanda lives in the United States, and she is afraid she will get a speeding ticket because the car’s speed- ometer indicates kilometers per hour. She has asked you to write a program that displays a table of speeds in kilometers per hour with their values converted to miles per hour. The formula for converting kilometers per hour to miles per hour is: MPH = KPH * 0.6214


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Constants for the speeds
    const int start_kph = 60,        //starting speed
              end_kph =  130,          //ending speed
            increment = 10;     //speed increment
    
    //constant for conversion factor
    const double conversion_factor = 0.6214;
    
    //Variables
    int kph;    //To hold speeds in kph
    double mph; //To hold speeds in MPH
    
    //set the numericoutput formatting.
    cout << fixed << showpoint << setprecision(1);
    
    //Display the table headings
    cout << "KPH\tMPH\n";
    cout << "-----------\n";
    
    //Display the speeds.
    for (kph = start_kph; kph <= end_kph; kph += increment)
    {
        //Calculate mph
        mph = kph * conversion_factor;
        
        //Display the speeds in kph and mph.
        cout << kph << "\t" << mph << endl;
    }
    
    
    
    return 0;
}
