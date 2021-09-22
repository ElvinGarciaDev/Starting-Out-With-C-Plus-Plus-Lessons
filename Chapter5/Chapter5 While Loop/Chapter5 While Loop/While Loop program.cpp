/*
 A project currently underway at Chemical Labs, Inc. requires that a substance be continu- ally heated in a vat. A technician must check the substance’s temperature every 15 minutes. If the substance’s temperature does not exceed 102.5 degrees Celsius, then the technician does nothing. However, if the temperature is greater than 102.5 degrees Celsius, the techni- cian must turn down the vat’s thermostat, wait 5 minutes, and check the temperature again. The technician repeats these steps until the temperature does not exceed 102.5 degrees Celsius. The director of engineering has asked you to write a program that guides the tech- nician through this process.
 
 Here is the algorithm:
 1. Prompt the user to enter the substance’s temperature.
 2. Repeat the following steps as long as the temperature is greater than 102.5 degrees
 Celsius:
 a. Tell the technician to turn down the thermostat, wait 5 minutes, and check the tem-
 perature again.
 b. Prompt the user to enter the substance’s temperature.
 3. After the loop finishes, tell the technician that the temperature is acceptable and to check it again in 15 minutes.
 After reviewing this algorithm, you realize that steps 2a and 2b should not be performed if the test condition (temperature is greater than 102.5) is false to begin with. The while loop will work well in this situation, because it will not execute even once if its condition is false. Program 5-4 shows the code for the program.
 **/


// This program assists a technician in the process
// of checking a substance's temperature.
#include <iostream>
using namespace std;

int main ()
{

    const double max_temp = 102.5; //Maximum temperature
    double temperature;            // To hold the temerature
    
    //Get the current temperature.
    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;
    
    //As long as necessary, instruct the technician to adjust the thermostat.
    while (temperature > max_temp)
    {
        cout << "The temperature is too high. Turn the thermostat down and wait 5 minutes.\n";
        cout << "The take the Celsisus temperature again.\n";
        cout << "and enter it here: ";
        cin >> temperature;
    }
    
    //Remind the techniction to check the temperature again in 15 minutes.
    cout << "The temerature is acceptable. Check it again in 15 minutes.\n";
    
    
    
    return 0;
}
