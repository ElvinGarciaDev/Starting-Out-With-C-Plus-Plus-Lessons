//Program 4-18 calculates the charges for membership in a health club. The club has three membership packages to choose from: standard adult membership, child membership, and senior citizen membership. The program presents a menu that allows the user to choose the
 //desired package and then calculates the cost of the membership.
#include <iostream>
#include <iomanip>
using namespace std;
 
 int main()
 {
 
     
     int choice;        //To hold the menue choice
     int months;        //To hold the number of months
     double charges;    //To hold the monthly charges
     
     //Constants for membership rates
     const double adult = 40.0, senior = 30.0, child = 20.0;
     
     //constants for manu choices
     const int adult_choice = 1, child_choice = 2, senior_choice = 3, quit_choice = 4;
     
     //Display the menu and get a choice.
     cout << "Health Club Membership Menu\n"
          << "1. Standard Adult Membership\n"
          << "2. Child Membership\n"
          << "3. Senior Citizen Membership\n"
          << "4. Quit the Program\n"
          << "Enter your choice: ";
     cin >> choice;
     
     //Set the numeric output formatting.
     cout << setprecision(2) << showpoint << fixed;
     
     //Respond to the user's menu selection.
     if (choice == adult_choice)
     {
         cout << "For how many months? ";
         cin >> months;
         charges = months * adult;
         cout << "The total charges are $" << charges << endl;
     }
     else if (choice == child_choice)
     {
         cout << "For how many months? ";
         cin >> months;
         charges = months * child;
         cout << "The total charges are $" << charges << endl;
     }
     else if (choice == senior_choice)
     {
         cout << "For how many months? ";
         cin >> months;
         charges = months * senior;
         cout << "The total charges are $" << charges << endl;
     }
     else if (choice == quit_choice)
     {
         cout << "Program ending.\n";
     }
     else
     {
         cout << "The valid choices are 1 through 4.\n"
         << "Run the program again and selecr on of those.\n";
     }
     
     return 0;
 }
