//This program demonstrates the vector size
//Member function
#include <iostream>
#include <vector>
using namespace std;

//Function prototype
void showValues(vector<int>); //don't need to accept a second arrgument for the size like the arrays

int main()
{
    vector<int> values;
    
    //Put a series of numbers in the vector.
    for (int i = 0; i < 7; i++)
        values.push_back(i * 2);
    
    //isplay the numbers
    showValues(values);
    
    return 0;
}

//**************************************************
// Definition of function showValues. *
// This function accepts an int vector as its *
// argument. The value of each of the vector's *
// elements is displayed. *
//**************************************************

void showValues(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << endl;
}
