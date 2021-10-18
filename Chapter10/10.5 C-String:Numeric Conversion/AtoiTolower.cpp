// This program demonstrates the strcmp and atoi functions.
#include <iostream>
#include <cctype> //for tolower
#include <cstring> //for strcmp
#include <cstdlib> //for atoi
using namespace std;

int main()
{
    const int SIZE = 20; //Array size
    char input[SIZE];    //To hold user input
    int total = 0;       //Accumulator
    int i = 0;           //Loop counter
    double average;      //To hold the average of numbers

    //Get the first number
    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, SIZE);

    //Proccess the number and subsquent numbers
    while (tolower(input[0] != 'q'))
    {
        total += atoi(input); //Change the use input into a number. Remeber we created a char array. so the program thinks it's a string. we need to update it to an int. 
        i++;                   //Count the numbers entered.
        //Get the next number
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, SIZE);
    }

    //If any numbers were entered, display their average.
    if (i != 0)
    {
        average = static_cast<double>(total) / i;
        cout << "Average: " << average << endl;
    }




    return 0;
}