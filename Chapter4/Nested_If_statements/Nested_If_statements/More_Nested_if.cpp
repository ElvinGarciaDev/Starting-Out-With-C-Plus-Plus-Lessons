//This program demonstrates the nested if statement.
#include <iostream>
using namespace std;


int main()
{
    
    
    string gender;
    int age;
    string yesNo;
    
    cout << "Are you male or female: ";
    cin >> gender;
    cout << "How old are you: ";
    cin >> age;
    
    
    if (gender == "male")
    {
        if (age > 17)
        {
            cout << "You qualify for the team. " << endl;
        }
        else
        {
            cout << "You must be atleast 18 to qualify. " << endl;
        }
    }
    else
    {
        cout << "You must be male to qualify for the team. " << endl;
        
    }
    
    
    return 0;
}
