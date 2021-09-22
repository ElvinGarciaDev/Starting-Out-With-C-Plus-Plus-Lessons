//This progream has three functions: main, first and second.
#include <iostream>
using namespace std;

// Function Prototypes
void first();
void second();

int main ()
{
    cout << "I am starting in function main.\n";
    first();    // Call function first
    second();   //Call function second.
    cout << "Back in the function main again.\n";
    return 0;
}

//*************************************
// Definition of function first. *
// This function displays a message. *
//*************************************

void first()
{
    cout << "I am now inside the function first.\n";
}

//*************************************
// Definition of function second. *
// This function displays a message. *
//*************************************

void second()
{
    cout << "I am noe inside the function second.\n";
}
