//This program shows how the ecit function causes a progeam
//to stop ececuting.
#include <iostream>
#include <cstdlib> //Needed for the exit function.
using namespace std;

void displayfunction(); //Function prototype

int main()
{
    displayfunction();
    return 0;
}

//***********************************************************
// This function simply demonstrates that exit can be used *
// to terminate a program from a function other than main. *
//***********************************************************

void displayfunction()
{
    cout << "This program terminates with the exit function.\n";
    cout << "Bye!\n";
    exit(0);
    cout << "This message will never be displayed\n";
    cout << "Because the program has already terminated.\n";
}
