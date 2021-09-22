//In class 2d array. This will show you how to initialize and display a 2d array
#include <iostream>
using namespace std;


int main()
{
    //First [] is for rows and second is for columns. the second [] for columns can never be left empty.
    int myTwoDimen[][8] = { {2,3,4,5,6,5,4,3},
                            {2,3,4,5,6,5,4,3},
                            {2,3,4,5,6,5,4,3} }; //this 2d array has three rows and 8 columns
    

    //to output is similar to arrays. only difference is You'll use a nested for loop
    for (int r = 0; r < 3; r++)//this first loop will go through the 2d array rows.
    {
        cout << "\n row #" << r;
        for (int c = 0; c < 8; c++) //This nested second for loop will go through the columns
        {
            cout << " Column #" << c << " value: " <<myTwoDimen[r][c];
        }
    }
    cout << endl;

        
                                        
    
    
    return 0;
}
