// This program demonstrates the binarySearch function, which
// performs a binary search on an integer array.
#include <iostream>
using namespace std;

//Functionm prototype
int binarySearch(const int [], int, int);
const int SIZE = 20;

int main()
{
    //Array with employee IDs sorted in asceding order.
    int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                        417, 429, 447, 551, 536, 600};
    int results; //To hold the search results
    int empID;   //To hold an employee ID
    
    //Get an employee ID to search for.
    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;
    
    //Search for the id
    results = binarySearch(idNums, SIZE, empID);
    
    //If the results contains -1 the ID was not found.
    if (results == -1)
        cout << "That number does not exist in the array. \n";
    else
    {
        //otherwise results contains the subscript/idnex of
        //the specidied employee ID in the array.
        cout << "That ID is found at the element " << results;
        cout << " In the array.\n";
    }
    return 0;
}

//***************************************************************
// The binarySearch function performs a binary search on an *
// integer array. array, which has a maximum of size elements, *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, −1 is *
// returned indicating the value was not in the array. *
//***************************************************************

int binarySearch(const int array[], int size, int value){
    int first = 0,      //First array element
    last = size - 1,    //Last array element
    middle,             //Midpoint of search
    postion = -1;       //Position of search value
    bool found = false; //flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2; //Calculate the midpoint
        if (array[middle] == value) //if value is found at mid
        {
            found = true;
            postion = middle;
        }
        else if (array[middle] > value) //If value is in the lower half
            last = middle - 1;
        else
            first = middle + 1;         //If the value is in the upper half
    }
    return postion;
}
