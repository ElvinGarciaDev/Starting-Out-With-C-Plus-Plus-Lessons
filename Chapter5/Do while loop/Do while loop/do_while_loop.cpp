// This program displays a menu and asks the user to make a
// selection. A do-while loop repeats the program until the
// user selects item 4 from the menu.
#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{

    //Constants for menu choices
    const int adult_choice = 1,
              child_choice = 2,
              senior_choice = 3,
              quit_choice = 4;
    
    //Constants for membership rates
    const double adult = 40.0,
                 child = 20.0,
                 senior = 30.0;
    
    //Variables
    int choice;  //Menu choice
    int months;   //Number of months
    double charges; //Monthly charges
    
    //Set up numeric output formatting
    cout << fixed << showpoint << setprecision(2);
    
    do
    {
        //Display the menu.
        cout << "\n\t\tHealth Club Membership menu\n\n"
             << "1. Standard Adult Membership\n"
             << "2. Child Membership\n"
             << "3. Senior Citizen Membership\n"
             << "4. Quit the Program\n\n"
             << "Enter your choice: ";
        cin >> choice;
        
        //Validate the menue selection.
        while (choice < adult_choice || choice > quit_choice)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }
        
        //Process the user's choice.
        if (choice != quit_choice)
        {
            //Get the number of months.
            cout << "For how many months: ";
            cin >> months;
            
            //Respond to the uses menu selection
            switch (choice)
            {
                case adult_choice:
                    charges = months * adult;
                    break;
                case child_choice:
                    charges = months * child;
                    break;
                case senior_choice:
                    charges = months * senior;
            }
            
            //Display the monthly charges.
            cout << "The total charges are $" << charges << endl;
        }
    } while (choice != quit_choice);
    return 0;
}
