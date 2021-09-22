// This program unsafely accesses an area of memory by writing
// values beyond an array's boundary.
// WARNING: If you compile and run this program, it could crash.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;  //Constant for the array size
    int values[SIZE];    //An array with 3 intergers
    
    
    // Attempt to store five numbers in the three-element array.
    cout << "I will store 5 numbers in a 3-element array!\n";
    for (int count = 0; count < 5; count++)
    {
        values[count] = 100; //for each element. This loop starts at zero. So when this loop runs it will assinged 100 to each element.
    }
    
    //If the program is still running, display the numbers.
    cout << "If you see this message, it means the program\n has not crashed! Here are the numbers:\n";
    for (int count = 0; count < 5; count++)
    {
        cout << values[count] << endl;
    }
    
    return 0;
}
