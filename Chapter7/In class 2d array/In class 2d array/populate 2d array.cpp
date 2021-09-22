//Working in same program as 2d array practis.cpp. This part shows how to populate arrays. We'll populate random numbers
#include <iostream>
using namespace std;
#include <ctime> //time header
#include <cstdlib> //srand


int main()
{
    //First [] is for rows and second is for columns. the second [] for columns can never be left empty.
    int myTwoDimen[][8] = { {2,3,4,5,6,5,4,3},
                            {2,3,4,5,6,5,4,3},
                            {2,3,4,5,6,5,4,3} }; //this 2d array has three rows and 8 columns
    

    
    //This will populate values in the array.
    for (int r = 0; r < 3; r++)//this first loop will go through the 2d array rows.
    {
        for (int c = 0; c < 8; c++) //This nested second for loop will go through the columns
        {
            myTwoDimen[r][c] = rand(); //populaate  radnome numbers to the 2d array.
        }
    }
    
    //We can reuse the output code in the mainc.pp to display the array with the randome numbers
    for (int r = 0; r < 3; r++)//this first loop will go through the 2d array rows.
    {
        cout << "\n row #" << r;
        for (int c = 0; c < 8; c++) //This nested second for loop will go through the columns
        {
            cout << "\n Column #" << c << " value: " <<myTwoDimen[r][c];
        }
    }
    cout << endl;

        
                                        
    
    
    return 0;
}
