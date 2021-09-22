
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    
    //Multiplication table
    
    for(int i = 1; i <=10; i++) //This is the outer loop. It will go from 1 to 10
    {
        for(int j = 1; j <= 10; j++) //This is the inner loop.
        {
            cout << i << " * " << j << " = " << i*j << endl;
        }
        cout << endl;
    }
    
    
    
    return 0;
}


//This is a nested for loop
