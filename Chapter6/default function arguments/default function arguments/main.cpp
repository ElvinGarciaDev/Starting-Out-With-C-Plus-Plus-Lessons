//This program demonstartes default function arguments.
#include <iostream>
using namespace std;

// Function prototype with default arguments
void displayStars(int = 10, int = 1);

#include <iostream>

int main()
{
    displayStars();    //Use defult values for cols and rows.
    cout << endl;
    displayStars(5);   //Use defult value for rows
    cout << endl;
    displayStars(7, 3); //use 7 for cols and 3 for rows.
    return 0;
}


//*********************************************************
// Definition of function displayStars. *
// The default argument for cols is 10 and for rows is 1.*
// This function displays a square made of asterisks. *
//*********************************************************

void displayStars(int cols, int rows)
{
    //Nested loop. The outer loop controls the row/
    //And the inner loo[ controls the columns.
    for(int down = 0; down < rows; down++)
    {
        for(int across = 0; across < cols; across++)
            cout << "*";
        cout << endl;
    }
}
