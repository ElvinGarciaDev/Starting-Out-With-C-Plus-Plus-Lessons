// This program shows an array name being dereferenced with the *
// operator.
#include <iostream>
using namespace std;

int main()
{
    short numbers[] = {10,20,40,30,50};

    cout << "The first element of the array is ";
    cout << *numbers << endl;


    return 0;
}