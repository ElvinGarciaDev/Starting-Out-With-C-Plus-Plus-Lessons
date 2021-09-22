//This will show you how to pass arrays into functions
#include <iostream>
using namespace std;

void passingArrays(int [], int); //function prototype. you need the data type and minimum brackets. and the data type of the araay size
//in c++ arrays are not passed by value, they are passed by reference

int main ()
{
    
    int ages[]= {18, 22, 38, 45, 78, 32};
    passingArrays(ages, sizeof(ages) / sizeof(int)); //Calling the fuinction. By passing by reference your using the arrays location. The name points to the location. //you can use sizeof(arrayname) devide by sizeof(array data type) if you don't know the #of elements
    
    return 0;
}

void passingArrays(int a[], int size) //you need to include two arguments. The array data type, and array size
{
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
}
