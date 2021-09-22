// The function displayMessage is repeatedly called from a loop.
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
// **********************************     *

void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
 
    cout << "We're in the main function.\n";
    
    for (int count = 0; count <= 5; count++)
    {
        displayMessage();
    }
    cout << "We're back in the main function.\n";
    
    return 0;
}
