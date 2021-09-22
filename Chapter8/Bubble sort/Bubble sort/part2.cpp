// This program uses the bubble sort algorithm to sort an
// array in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void sortArray(int [], int);
void showArray (int [], int);

int main()
{
   const int SIZE = 6;
    // Array of unsorted values
    int values[SIZE] = {64, 24, 4, 21, 13, 1};
    
    //sort the array
    sortArray(values, SIZE);
    
    //display the array
    showArray(values, SIZE);
    
    
    return 0;
}


//***********************************************************
// Definition of function sortArray *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array. *
//***********************************************************

void sortArray(int Array[], int size)
{
    bool swapflag;
    int temp;
    
    do
    {
        swapflag = false; //This flag will turn to true if any swaps are done. If no swaps are done then the array it's already sorted.
        
        for (int i = 0; i < size - 1; i++) //size - 1 because the elements start at 0
        {
            if (Array[i] > Array[i + 1]) //This will check if the first element is less than the second element +1 will check for the next element.
            {
                temp = Array[i]; //If array[i] is greater than array[i + 1], the two elements must be exchanged. First, the contents of array[i] are copied into the variable temp
                Array[i] = Array[i + 1]; //Moving the element to where the prvious elemnt was
                Array[i + 1] = temp; //Set the current element that will be compated next
                swapflag = true; //If a swap was made this will switch to true.
            }
        }
        
    }while (swapflag); //This will rerun if the swapflag was turned true. Means a swap was made.
}

//*************************************************************
// Definition of function showArray. *
// This function displays the contents of array. size is the *
// number of elements. *
//*************************************************************

void showArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << endl;
}
