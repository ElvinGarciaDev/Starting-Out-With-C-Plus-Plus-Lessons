// This program demonstrates the bad_alloc exception.
#include <iostream>
#include <new>      // Needed for bad_alloc
using namespace std;

int main()
{
    double *ptr = nullptr; //pointer to double

    try
    {
        ptr = new double [10000];
    }
    catch (bad_alloc)
    {
        cout << "insufficient memory.\n";
    }



    return 0;
}