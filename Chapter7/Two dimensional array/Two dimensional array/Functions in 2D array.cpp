//This program demonstartes accepting a 2D array argument.
#include <iostream>
#include <iomanip>
using namespace std;

//Global constants
const int COLS = 4; //number of collumns in each array
const int TABL1_ROWS = 3; //number of rows in table1
const int TBL2_ROWS = 4;  //NUmber of rows in table2

void showArray(const int[][COLS], int); //function prototype

int main()
{
    int table1[TABL1_ROWS][COLS] = { {1,2}, {3,4}, {5,6}, {7,8}, {9,10}, {11, 2} };
    
    int table2[TABL1_ROWS][COLS] = { {10,20}, {30,40}, {50,60}, {70,80}, {90,100}, {110,120}, {130,140}, {150,160} };
    
    
    
    return 0;
}


//******************************************************************
// Function Definition for showArray *
// The first argument is a two-dimensional int array with COLS *
// columns. The second argument, rows, specifies the number of *
// rows in the array. The function displays the array's contents. *
//******************************************************************

void showArray(const int numbers[][COLS], int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COLS; y++)
        {
            cout << setw(4) << numbers [x][y] << " ";
        }
        cout << endl;
    }
        

}
