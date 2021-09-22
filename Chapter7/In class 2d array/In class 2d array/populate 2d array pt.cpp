//This is the same program as populate 2d array.cpp. but less code. We try not to initialize the 2d array and instead just add radome values
#include <iostream>
using namespace std;
#include <ctime> //time header
#include <cstdlib> //srand

int main()
{
    const int rows = 3;
    const int columns = 8;
    
    int myTwoDimen[rows][columns]; //You don't need to inizialize when you provide the row and column size
    
    
    //This will populate values in the array.
    for (int r = 0; r < rows; r++)//this first loop will go through the 2d array rows.
    {
        for (int c = 0; c < columns; c++) //This nested second for loop will go through the columns
        {
            myTwoDimen[r][c] = rand(); //populaate  radnome numbers to the 2d array.
        }
    }
    
    //We can reuse the output code in the mainc.pp to display the array with the randome numbers
    for (int r = 0; r < rows; r++)//this first loop will go through the 2d array rows.
    {
        cout << "\n row #" << r;
        for (int c = 0; c < columns; c++) //This nested second for loop will go through the columns
        {
            cout << "\n Column #" << c << " value: " << myTwoDimen[r][c];
        }
    }
    cout << endl;
    
    
    return 0;
}
