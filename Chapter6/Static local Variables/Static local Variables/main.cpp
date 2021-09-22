//This program uses a static local variable.
#include <iostream>
using namespace std;

void showStatic();//function prototype

int main()
{
    //Call the showStatic function five times.
    for(int i = 0; i < 5; i++)
    {
        showStatic();
    }
    return 0;
}

//**************************************************************
// Definition of function showStatic. *
// statNum is a static local variable. Its value is displayed *
// and then incremented just before the function returns.
//**************************************************************

void showStatic()
{
    static int statNum;
    
    cout << "StatNum is " << statNum << endl;
    statNum++;
}
