#include <iostream>
using namespace std;

//Function prototype
int binarySearch(int array[], int size, int searchValue);

int main()
{
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    
    int userValue; //Will hold the value the user is looking for
    int result;    //Will hold the function return
    
    cout << "Enter an interger you want to search for: ";
    cin >> userValue;
    
    result = binarySearch(a, 8, userValue);
    
    if (result >= 0)
    {
        cout << "The number " << a[result] << " was found at the element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found. " << endl;
    }
    
    
    return 0;
}

int binarySearch(int array[], int size, int searchValue)
{
    int low = 0;            //First array element
    int high = size - 1;    //CALCULATION TO FIND LASY ARRAY ELEMENT
 
    int mid;                //Variable for the mid point
 
    while (low <= high)
    {
        mid = (low + high) / 2;     //Calculation to find the midpoint
 
        if(searchValue == array[mid])
        {
            return mid;
        }
        else if (searchValue > array[mid]) //If the search value is greater than the midpoint we need to update the low(first element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
