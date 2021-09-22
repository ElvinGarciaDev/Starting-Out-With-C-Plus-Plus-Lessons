// This program calculates the total number of points a
// soccer team has earned over a series of games. The user
// enters a series of point values, then −1 when finished.

#include <iostream>
using namespace std;

int main()
{

    int game = 1, //game counter
        points,  // To hold a number of points
    total = 0;   //accumulator
    
    cout << "Enter the number of points your team has earned so far in the season, then enter -1 when finished.\n";
    cout << "Enter the number of points for game " << game << ": " << endl;
    cin >> points;
    
    while (points != -1)
    {
        total += points;            //Same as total = points + total
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }
    cout << "The total points are " << total << endl;
    
    
    return 0;
}
