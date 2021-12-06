// This program demonstrates the Account class.
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"
using namespace std;

//Function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    Account savings;    //savings account object
    char choice;        //Menu selection

    //set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    do
    {
        //Display the menu and get a valid selection
        displayMenu();
        cin >> choice;
        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range "
                 << "of A through G: ";
            cin >> choice;
        }

        //Process the users menu selection
        switch(choice)
        {
            case 'a':
            case 'A': cout << "The current balance is $";
                      cout << savings.getBalance() << endl;
                      break;
            case 'b':
            case 'B': cout << "There have been ";
                      cout << savings.getTransactions()
                           << " transactions.\n";
                        break;
            case 'c':
            case 'C': cout << "Interest earned for this period: $";
                      cout << savings.getInterest() << endl;
                      break;
            case 'd':
            case 'D': makeDeposit(savings);
                      break;
            case 'e':
            case 'E': withdraw(savings);
                      break;
            case 'f':
            case 'F': savings.calcIntrest();
                        cout << "Interest added.\n";
        }
    } while (toupper(choice) != 'G'); //same as choice != 'G' or 'g'

    return 0;
}

//*****************************************************
// Definition of function displayMenu. This function *
// displays the user's menu on the screen. *
//*****************************************************

void displayMenu()
{
    cout << "\n                   MENU\n";
    cout << "-----------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

//**************************************************************
// Definition of function makeDeposit. This function accepts    *
// a reference to an Account object. The user is prompted for   *
// the dollar amount of the deposit, and the makeDeposit        *
// member of the Account object is then called.                 *
//**************************************************************

void makeDeposit(Account &acnt)
{
    double dollars;

    cout << "Enter the amount of the deposit: ";
    cin >> dollars;
    cin.ignore();
    acnt.makeDeposit(dollars);
}

//**************************************************************
// Definition of function withdraw. This function accepts       *
// a reference to an Account object. The user is prompted for   *
// the dollar amount of the withdrawal, and the withdraw        *
// member of the Account object is then called.                 *
//**************************************************************

void withdraw(Account &acnt)
{
    double dollars;

    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;
    cin.ignore();
    if (!acnt.withdraw(dollars))
        cout << "Error: Withdrawl amount too large.\n\n";
       
} 



/*
You are a programmer for the Home Software Company. You have been assigned to develop a class that models the basic workings of a bank account. 
The class should perform the following tasks:
• Save the account balance.
• Save the number of transactions performed on the account.
• Allow deposits to be made to the account.
• Allow withdrawals to be taken from the account.
• Calculate interest for the period.
• Report the current account balance at any time.
• Report the current number of transactions at any time.
*/