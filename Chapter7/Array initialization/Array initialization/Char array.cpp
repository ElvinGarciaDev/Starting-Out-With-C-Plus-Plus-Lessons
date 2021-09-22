// This program uses an array of ten characters to store the
// first ten letters of the alphabet. The ASCII codes of the
// characters are displayed.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_LETTERS = 10;
    char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    cout << "Character" << "\t" << "ASCII Code\n";
    cout << "---------" << "\t" << "-------------\n";
    for (int i = 0; i < NUM_LETTERS; i++)
    {
        cout << letters[i] << "\t\t";
        cout << static_cast<int>(letters[i]) << endl;
    }
    
    
    return 0;
}
