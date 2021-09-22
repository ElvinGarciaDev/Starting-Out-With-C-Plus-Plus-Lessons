#include <iostream>
using namespace std;

int main()
{

   const int maxSize = 9; //An array length can not change. It has to always be a const
    
    
    
    char letter_y[maxSize]; //Letter [?][?][?][?][?][?][?][?][?] is created this.
    for (int i = 0; i < maxSize; i++)
    {
        letter_y[i] = 'J'; //This will put J in all the elements.
        cout << letter_y[i]; //This will print all the elements
        cout << endl;
    }
    
    cout << endl;
    cout << "element 4 has a value of " << letter_y[4] << endl; //This will only access sub script (index)4

    
    
    
    return 0;
}
