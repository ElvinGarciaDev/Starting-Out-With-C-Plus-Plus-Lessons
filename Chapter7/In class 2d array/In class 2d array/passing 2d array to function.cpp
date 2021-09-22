//this will show you how to add a 2d array into a function
#include <iostream>
using namespace std;

//Global constants
const int rows = 3;
const int columns = 8;

//function prototype
void populateArray(int [rows][columns]); //The second [] can never be emtpy.
void displayArray(int [rows][columns]); //This will display the 2d array.

int main()
{
    srand(time(NULL)); //So we don't get the same random numbers everytime
    
    int myTwoDimen[rows][columns]; //You don't need to inizialize when you provide the row and column size

    populateArray(myTwoDimen); //This function will populate the array
    
    displayArray(myTwoDimen); //This function will display the array
    
    return 0;
}


//*******************
//This function will add random value to the 2d array
//******************
void populateArray(int array[rows][columns])
{
    for (int r = 0; r < rows; r++)//this first loop will go through the 2d array rows.
    {
        for (int c = 0; c < columns; c++) //This nested second for loop will go through the columns
        {
            array[r][c] = rand(); //populaate  radnome numbers to the 2d array.
        }
    }
}


//*******************
//This function will display the array
//******************
void displayArray(int array[rows][columns])
{
    for (int r = 0; r < rows; r++)//this first loop will go through the 2d array rows.
    {
        cout << "\n row #" << r; //Display the row number
        for (int c = 0; c < columns; c++) //This nested second for loop will go through the columns
        {
            cout << "\n Column #" << c << " value: " << array[r][c];
        }
    }
    cout << endl;
}
