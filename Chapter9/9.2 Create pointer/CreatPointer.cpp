// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

int main() 
{
    int x = 25; //int variable
    int *ptr = nullptr; //pointer variable, can point to an int

    ptr = &x;           //Store the address of x in ptr

    //Use both x and ptr to display the value in x.
    cout << "Here is the value in x, printed twice: \n";
    cout << x << endl; //Display the content of x.
    cout << *ptr << endl; //Displays the content of x

    //assign 100 to the location pointed to by ptr. This will actually assign 100 to x.
    *ptr = 100; //Use * to derefrence. 

    //use both x and ptr to display the value in x. 
    cout << "Once again, here is the value in x: \n";
    cout << x << endl; //displays the content of x
    cout << *ptr << endl; //displays the content of x

return 0;
}