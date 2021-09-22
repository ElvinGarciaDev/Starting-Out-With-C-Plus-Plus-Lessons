// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;

int main()
{
    //Define an array of integers.
    int numbers[] = {10, 20, 30, 40, 50};
    
    //Display the valuyes in the array.
    for (int val : numbers)
        cout << val << endl;
    
    
    return 0;
}


/*
 Here is the general format of the range-based for loop: for (dataType rangeVariabl : array)
 statement;
 Let’s look at the syntax more closely as follows:
 • dataType is the data type of the range variable. It must be the same as the data type of the array elements, or a type that the elements can automatically be converted to.
 • rangeVariable is the name of the range variable. This variable will receive the value
 of a different array element during each loop iteration. During the first loop iteration, it receives the value of the first element; during the second iteration, it receives the value of the second element, and so forth.
 • array is the name of an array on which you wish the loop to operate. The loop will iterate once for every element in the array.
 • statement is a statement that executes during a loop iteration. If you need to execute more than one statement in the loop, enclose the statements in a set of braces
 **/
