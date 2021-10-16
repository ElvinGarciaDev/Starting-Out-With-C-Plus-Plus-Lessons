// This program processes an array using pointer notation.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; //size of the array
    int numbers[SIZE]; //Array of integers


    //Get values to store in the array.
    //use pointer notation instead of subscritps.
    cout << "Enter " << SIZE " numbers: ";
    for (int i = 0; i < size; i++)
        cin >> *(numbers + i);

    //Display the values in the array
    //use pointer notation
    cout << "Here are the numbers you entered: \n";
    for (int i = 0; i < SIZE; i++)
        cout << *(numbers + 1) << " ";
    cout << endl;

    return 0;
}
