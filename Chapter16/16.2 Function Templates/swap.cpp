// This program demonstrates the swapVars function template. 
#include <iostream>
using namespace std;

template <class T>
void swapVars(T &var1, T &var2)
{
    T temp;

    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main()
{
    char firstChar, secondChar;
    int firstInt, secondInt;           // Two ints
    double firstDouble, secondDouble; // Two doubles

    //Get and swap
    cout << "Enter two characters: ";
    cin >> firstChar >> secondChar;
    swapVars(firstChar, secondChar);
    cout << firstChar << " " << secondChar << endl;


    return 0;
}