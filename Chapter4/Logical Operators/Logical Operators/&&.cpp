// This program demonstrates the && logical operator.
#include <iostream>
using namespace std;

int main()
{

    
    char employed,  //Currently employed, Y or N
        recentgrad; //Recent grad, Y or N
    
    //Is the user employed and a recent grad?
    cout << "Answer the following questions with either Y for Yes or N for No.\n";
    cout << "Press enter to continue" << endl;
    cin.get();
    
    cout << "Are you employed: ";
    cin >> employed;
    
    cout << "Have you graduated from college: ";
    cin >> recentgrad;
    
    
    //Determine the users loan qualifications
    if (employed == 'Y' && recentgrad == 'Y')
    {
        cout << "You qualify for the special intrest rate.\n ";
    }
    else
    {
        cout << "You must be employed and have graduated from college in the past two years to qualify";
    }
    
    
    return 0;
}
