//This program demonstrates thatan array element is passed
//To a function like any other variable.
#include <iostream>
using namespace std;

void showValue(int); //Function prototype

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    
    for (int i = 0; i < SIZE; i++)
        showValue(numbers[i]);
    return 0;
}

//**********************************************
// Definition of function showValue. *
// This function accepts an integer argument. *
// The value of the argument is displayed. *
//**********************************************

void showValue(int num)
{
    cout << num << " ";
}
