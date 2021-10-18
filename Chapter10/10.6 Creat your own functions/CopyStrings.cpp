// This program uses a function to copy a C-string into an array.
#include <iostream>
using namespace std;

void stringCopy(char [], char[]);

int main()
{
    const int LENGTH = 30;  //size of the arrays
    char first[LENGTH];     //to hold the users input
    char second[LENGTH];    //To hold the copy

    //Get a string from the user and store in first.
    cout << "Enter a string with no more than "
         << (LENGTH - 1) << " characters: \n";
    cin.getline(first, LENGTH);

    //Copy the contents of first to second.
    stringCopy(first, second);

    //Displat the copy.
    cout << "The string you entered is: \n" << second << endl;
    return 0;
}

//***********************************************************
// Definition of the stringCopy function. *
// This function copies the C-string in string1 to string2. *
//***********************************************************
void stringCopy(char string1[], char string2[])
{
    int index = 0; //loop counter


    //Step through string1, copying each element to
    //String2. Stop when the null character is encountered.
    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
    }

    //Place a null characeter in string2.
    string2[index] = '\0';
}
