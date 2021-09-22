// This program initializes a string array.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 9;
    string planets[SIZE] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto (a dwark planet)" };
    
    cout << "Here are the planets:\n";
    
    for (int i = 0; i < SIZE; i++)
        cout << planets[i] << endl;
    
    
    return 0;
}

