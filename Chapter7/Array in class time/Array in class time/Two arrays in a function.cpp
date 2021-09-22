//This will show you how to pass  two arrays into functions
#include <iostream>
using namespace std;

void passingArrays(int [], int, int [], const int); //function prototype. you need the data type and minimum brackets. and the data type of the araay size
//in c++ arrays are not passed by value, they are passed by reference

int main ()
{
   const int max_size = 6; //always has to be a const
    int ages_2[] = {1, 2, 3, 4, 5, 6};
    
    int ages[]= {18, 22, 38, 45, 78, 32};
    passingArrays(ages, sizeof(ages) / sizeof(int), ages_2, max_size); //Calling the fuinction. By passing by reference your using the arrays location. The name points to the location. //you can use sizeof(arrayname) devide by sizeof(array data type) if you don't know the #of elements
    
    return 0;
}

void passingArrays(int a[], int size, int b[], int size_b) //you need to include two arguments. The array data type, and array size
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << endl;
    }
}
//this function takes two arrays and displays them. To display them I used two different for loops
