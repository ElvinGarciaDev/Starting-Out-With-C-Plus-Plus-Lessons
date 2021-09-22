// This program displays a list of numbers and
// their squares.
#include <iostream>
using namespace std;

int main()
{

    
    const int min_number = 1, //Starting number to square
              max_number = 10; //Maximum number to square
    
    int num = min_number;
    
    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    while (min_number <= max_number)
    {
        cout << min_number << "\t\t" << (num * num) << endl;
        num++; //increment the counter
    }
    
    
    return 0;
}

//In Program 5-6, the variable num, which starts at 1, is incremented each time through the loop. When num reaches 11 the loop stops. num is used as a counter variable, which means it is regularly incremented in each iteration of the loop. In essence, num keeps count of the number of iterations the loop has performed.
