// This program displays the numbers 1 through 10 and
// their squares.
#include <iostream>
using namespace std;


int main()
{

    
    const int min_number = 1,            //starting value
              max_number = 10;           // Ending value
    
    int num;
    
    cout << "Number Number squared\n";
    cout << "-------------------------\n";
    
    for (num = min_number; num <= max_number; num++)
        cout << num << "\t\t" << (num * num) << endl;
    
    return 0;
}
