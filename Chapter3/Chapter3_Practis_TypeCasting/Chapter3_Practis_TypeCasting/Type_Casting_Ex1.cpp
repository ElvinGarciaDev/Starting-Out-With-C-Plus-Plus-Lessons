
#include <iostream>
using namespace std;

int main()
{
    
    double value = 5.25;

    double a = static_cast<int>(value) + 5.3;
    cout << a << endl;

    return 0;
}


// you can use type cast to later change the data type. In this example "value" was first used as a doble. But in the next line you changed "value to to int by using the static_cast.
