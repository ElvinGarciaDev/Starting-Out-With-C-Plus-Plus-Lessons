#include <iostream>
using namespace std;

//Function prototype
int linearSearch(int array[], int, int);

int main()
{
    int a[] = {15, 23, 7, 45, 87, 16};
    
    int userValue; //Will hold the value the user is looking for
    int result;    //Will hold the function return
    
    cout << "Enter an interger you want to search for: ";
    cin >> userValue;
    
    result = linearSearch(a, 6, userValue);
    
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

int linearSearch(int array[], int size, int searchValue)
{
    for (int i = 0; i < size; i++)
    {
        if (searchValue == array[i])
        {
            return i;
        }
    }
    return -1;
}
