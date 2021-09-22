//// The switch statement in this program tells the user something he or she already knows: the data just entered!
#include <iostream>
using namespace std;

int main()
{

    
    char choice;
    
    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch (choice)
    {
        case 'A': cout << "You entered A.\n";
            break;
        case 'B': cout << "You entered B.\n";
            break;
        case 'C': cout << "You entered C.\n";
            break;
        default: cout << "You did not enter A, B, or C!\n";
    }
    
    
    
    return 0;
}

//The case statements show the program where to start executing in the block and the break statements show the program where to stop. Without the break statements, the program would execute all of the lines from the matching case statement to the end of the block.
