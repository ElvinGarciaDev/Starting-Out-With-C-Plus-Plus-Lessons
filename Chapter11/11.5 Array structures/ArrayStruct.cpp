// This program uses an array of structures.
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
    int hours;  //Hours worked
    double payRate; //Hourly pay rate
};

int main()
{
    const int NUM_WORKERS = 3; //number of workers
    PayInfo workers[NUM_WORKERS]; //Array of structures
    

    //Get the employee pay rate
    cout << "Enter the hours worked by " << NUM_WORKERS 
         << " employees and their hourly rates.\n";

    for (int i = 0; i < NUM_WORKERS; i++)
    {
        //Get the hours worked by an employee.
        cout << "Hours worked by employee #" << (i + 1);
        cout << ": ";
        cin >> workers[i].hours;

        //Get the employee's hourly pay rate.
        cout << "Hourly pay rate for employee # ";
        cout << (i + 1) << ": ";
        cin >> workers[i].payRate;
        cout << endl;
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < NUM_WORKERS; i++)
    {
        double gross;
        gross = workers[i].hours * workers[i].payRate;
        cout << "Employee #" << (i + 1);
        cout << ": $" << gross << endl;
    }



    return 0;
}