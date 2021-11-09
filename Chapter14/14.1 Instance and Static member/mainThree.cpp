// This program demonstrates a static member variable.
#include <iostream>
#include "Three.h"
using namespace std;

int main()
{
    //Define three tree objects.
    Tree oak;
    Tree elm;
    Tree pine;

    //Display the number of Tree objects we have
    cout << "We have " << pine.getObjectCount()
         << " Trees in our program!\n";
    return 0;
}