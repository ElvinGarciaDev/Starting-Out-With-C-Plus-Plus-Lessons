// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib> //For rand and srand
#include <ctime> //for time function
using namespace std;

//FUnction prototype
int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr; //To point to the numbers

    //Get an array of give randome numnbers
    numbers = getRandomNumbers(5);

    //Display the numbers
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << endl;

    //Free the memory
    delete [] numbers;
    numbers = 0;
    return 0;
}

//***************************************************
// The getRandomNumbers function returns a pointer *
// to an array of random integers. The parameter *
// indicates the number of numbers requested. *
//**************************************************

int *getRandomNumbers(int num)
{
    int *arr = nullptr; //Array to hold numbers

    //return a null pointer if num is xero or negative
    if (num <= 0)
        return nullptr;

    //Dinamically allocate the array
    arr = new int[num];

    //seed the random number generator by passing
    // the return value of time(0) to srand.
    srand(time(0));

    //populate the array with random numbers.
    for (int i = 0; i < num; i++)
        arr[i] = rand();

        //return a pointer to the array
        return arr;

}