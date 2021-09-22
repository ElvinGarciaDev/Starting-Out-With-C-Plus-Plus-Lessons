#include "Header.h"
#include <iostream>
using namespace std;

//***************************************************
// Definition of getProdNum function                 *
// The getProdNum function asks the user to enter a *
// product number. The input is validated, and when *
// a valid number is entered, it is returned.       *
//***************************************************

int getProdNum()
{
    int prodNum; //Product number
    
    cout << "Enter the items product number: ";
    cin >> prodNum;
    //Validate input
    while (cin.fail() || prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
    {
        cout << "Enter a number in the range of " << MIN_PRODNUM << " Through " << MAX_PRODNUM << ".\n";
        cin >> prodNum;
    }
    return prodNum;
}


//***************************************************************
// Definition of binarySearch function *
// The binarySearch function performs a binary search on an *
// integer array. array, which has a maximum of numElems *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// −1 is returned indicating the value was not in the array. *
//***************************************************************

int binarySearch(const int array[], int numElems, int value)
{
    int left = 0, //First array element
    right = numElems - 1, //Last element in array
    mid;                  //Middle point
    
    while(left <= right)
    {
        mid = (left + right) / 2; //This will find the middle point
        
        if (array[mid] == value)
        {
            return mid;

        }
        else if (value < array[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}


//************************************************************
// The displayProd function accepts three arrays and an int. *
// The arrays parameters are expected to hold the title, *
// description, and prices arrays defined in main. The index *
// parameter holds a subscript. This function displays the *
// information in each array contained at the subscript. *
//************************************************************

void displayProd(const string title[], const string desc[], const double price[], int index)
{
    cout << "Title: " << title[index] << endl;
    cout << "Description: " << desc[index] << endl;
    cout << "Price: $" << price[index] << endl;
}
