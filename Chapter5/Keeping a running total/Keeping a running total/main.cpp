// Let’s look at a program that calculates a running total. Program 5-12 calculates a com- pany’s total sales over a period of time by taking daily sales figures as input and calculating a running total of them as they are gathered.
// This program takes daily sales figures over a period of time
// and calculates their total.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;   //Number of days
    double total = 0.0; //accumilator, initialized with 0
    
    //Get the number of days.
    cout << "For how many days do you have sales figures? ";
    cin >> days;
    
    //Get the sales for each day and acccumulate a total
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Enter the sales for the day " << count << ": ";
        cin >> sales;
        total += sales; //accumulate the runnong total.  // total = total + sales also works here
    }
    
    //Display the total sales.
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales are $" << total << endl;
    
    
    
    
    return 0;
}

/**
 
 Let’s take a closer look at this program. Line 9 defines the days variable, which will hold the number of days that we have sales figures for. Line 10 defines the total variable, which will hold the total sales. Because total is an accumulator, it is initialized with 0.0.
 In line 14 the user enters the number of days that he or she has sales figures for. The num- ber is assigned to the days variable. Next, the for loop in lines 17 through 23 executes. In the loop’s initialization expression, in line 17, the variable count is defined and initialized with 1. The test expression specifies the loop will repeat as long as count is less than or equal to days. The update expression increments count by one at the end of each loop iteration.
 Line 19 defines a variable named sales. Because the variable is defined in the body of the loop, its scope is limited to the loop. During each loop iteration, the user enters the amount of sales for a specific day, which is assigned to the sales variable. This is done in line 21. Then, in line 22 the value of sales is added to the existing value in the total variable. (Note that line 22 does not assign sales to total, but adds sales to total. Put another way, this line increases total by the amount in sales.)
 Because total was initially assigned 0.0, after the first iteration of the loop, total will be set to the same value as sales. After each subsequent iteration, total will be increased by the amount in sales. After the loop has finished, total will contain the total of all the daily sales figures entered. Now it should be clear why we assigned 0.0 to total before the loop executed. If total started at any other value, the total would be incorrect.
 */
