// This program demonstrates the showValues function being
// used to display the contents of two arrays.
#include <iostream>
using namespace std;

void showValues(int [], int); //function prototype

int main()
{
    const int SIZE1 = 8;  //Size of set1 array
    const int SIZE2 = 5;  //size of set2 array
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};
    
    //Pass set1 to showValies.
    showValues(set1, SIZE1);
    
    //Pass set2 to showValues
    showValues(set2, SIZE2);
}


//***************************************************
// Definition of function showValue. *
// This function accepts an array of integers and *
// the array's size as its arguments. The contents *
// of the array are displayed. *
//***************************************************

void showValues(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        cout << nums[i] << " " ;
    cout << endl;
}

