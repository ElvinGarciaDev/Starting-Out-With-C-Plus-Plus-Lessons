//This program demonstrates the nested if statement.
#include <iostream>
using namespace std;


int main()
{

    
    char employed,   // Currently employed, Y or N
        recent_grad; // Recent graduate, Y or N
    
    // Is the user employed and a recent graduate?
    cout << "Answer the following questions with either Y for Yes or N for No.\n";
    cout << "Are you employed? " ;
    cin >> employed;
    cout << "Have you graduated from college in the past two years?\n";
    cin >> recent_grad;
    
    // Determine the user's loan qualifications
    if (employed == 'Y')
    {
    
        if (recent_grad == 'Y' ) //Nested if
        {
            cout << "You qualify for the special intrest rate.\n";
        }
        else
        {
            cout << "You must have graduated from college in the past two years to qualify.\n";
        }
    }
    else
    {
        cout << "You must be employed to qualify.\n";
    }
    
    
    return 0;
}
