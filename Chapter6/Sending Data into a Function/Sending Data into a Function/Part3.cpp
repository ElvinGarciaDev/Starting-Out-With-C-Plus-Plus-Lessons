// This program demonstrates a function with three parameters.
#include <iostream>
using namespace std;

//Function prototype
void showSum(int, int, int);

int main()
{
    int value1, value2, value3;
    
    //Get three intergers.
    cout << "Enter three intergers and I will display their sum: ";
    cin >> value1 >> value2 >> value3;
    
    
    //Call showSum passing three arguments.
    showSum(value1, value2, value3);
    return 0;
}

//************************************************************
// Definition of function showSum. *
// It uses three integer parameters. Their sum is displayed. *
//************************************************************

void showSum(int num1, int num2, int num3)
{
    cout << (num1 + num2 + num3) << endl;
}
