
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    for (int i = 0; i < 11; i++)
    {
        //cout << i << endl;This will print numbers 1-10
        for (int k = i; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << "\n";
    }
    
    
    
    return 0;
}


//This is a nested for loop
