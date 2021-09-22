// This program demonstrates random numbers.

#include <iostream>
#include <cstdlib> //for rand and srand
#include <ctime> // for the time function
using namespace std;

int main()
{

    //Get the system time.
    unsigned seed = time(0);
    
    //Seed the random number generator.
    srand(seed);
    
    //Display three random numbers.
    cout << rand() << endl
    << rand() << endl
    << rand() << endl;
    
    
    return 0;
}



// using rand() will always give you the same random numbers. In order to randomize the result you have to se the srand() function
