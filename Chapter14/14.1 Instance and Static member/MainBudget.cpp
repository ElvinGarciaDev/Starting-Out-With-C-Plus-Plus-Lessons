// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "Budget.h"
using namespace std;

int main()
{
    const int NUM_DIVISIONS = 4;    //number of divisions
    Budget divisions[NUM_DIVISIONS];    //Array of budget objects

    //Get the budget request for each division
    for (int i = 0; i < NUM_DIVISIONS; i++)
    {
        double budgetAmount;
        cout << "Enter the budget request for division " << (i + 1) << ": ";
        cin >> budgetAmount;
        divisions[i].addBudget(budgetAmount);
    }



        // Display the budget requests and the corporate budget.
        cout << fixed << showpoint << setprecision(2);
        cout << "\nHere are the division budget requests:\n";
        for (int i = 0; i < NUM_DIVISIONS; i++)
        {
            cout << "\tDivision " << (i + 1) << "\t$ ";
            cout << divisions[i].getDivisionBudget() << endl;
        }
        cout << "\tTotal Budget Requests:\t$ ";
        cout << divisions[0].getCorpBudget() << endl;

    return 0;
}