// This program displays the number of days in each month. Program 7-6 demonstrates how an array may be initialized.
#include <iostream>
using namespace std;

int main()
{

    
    const int MONTHS = 12;
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 30, 31, 30};
    
    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Month " << (i + 1) << " has ";
        cout << days[i] << " days.\n";
    }
    
    return 0;
}
