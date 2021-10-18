// This program tests a customer number to determine whether
// it is in the proper format.
#include <iostream>
#include <cctype>
using namespace std;

//Functions
bool testNum(char [], int);

int main()
{
    const int SIZE = 8; //Array size
    char customer[SIZE];//To hold a customer number

    //Get the customber number
    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    //Determine whether it is valif.
    if (testNum(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else
    {
        cout << "That is not the proper format of the ";
        cout << "customer number.\nHere is an example:\n";
        cout << " ABC1234\n";
    }
    return 0;
}

//**********************************************************
// Definition of function testNum. *
// This function determines whether the custNum parameter *
// holds a valid customer number. The size parameter is *
// the size of the custNum array. *
//**********************************************************

bool testNum(char custNum[], int size)
{
    

    //Test the first three characters for alphabetic letters.
    for (int i = 0; i < 3; i++)
    {
        if (!isalpha(custNum[i])) //if it's not a letter return false. 
            return false;
    }

    //Test the remaining charcaters for numeric digits
    for (int i = 3; i < size - 1; i++)
    {
        if (!isdigit(custNum[i])) //if it's not a number return false
            return false;
    }
    return true; //if both are both are false the function will return true.
}