#include <iostream>
using namespace std;

void selectionSort(int [], int);
void showArray(const int [], int );


int main()
{

    const int SIZE = 10; //array size
    
    int values[SIZE] = {5, 12, 8, 6, 7, 11, 4, 3, 2, 1};
    
    //sort array
    selectionSort(values, SIZE);
    
    //dispay array
    showArray(values, SIZE);
    
    return 0;
}

void selectionSort(int Array[], int size)
{
    int smallest; //to hold the smallest value we find when stepping through the array
    int smallestIndex; //to hold the index of the smallest value we find.
    
    //
    for (int i = 0; i < (size - 1); i++)
    {
        smallest = Array[i]; //set the first element = to smallest
        smallestIndex = i;   //This will hold the index of the smallest value
        
        //inner loop that goes theough the array
        for (int j = i + 1; j < size; j++)
        {
            if(Array[j] < smallest)
            {
                smallest = Array[j];
                smallestIndex = j;
            }
        }
        Array[smallestIndex] = Array[i];
        Array[i] = smallest;
    }
}




void showArray(const int Array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Array[i] << endl;
    }
}
