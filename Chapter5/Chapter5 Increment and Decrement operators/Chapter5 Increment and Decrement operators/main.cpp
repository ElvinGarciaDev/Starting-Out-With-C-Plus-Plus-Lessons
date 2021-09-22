//This program demonstrates the ++ and −− operators.
#include <iostream>
using namespace std;


int main()
{

    int num = 4;  //num starts out with 4.
    
    //Display the value in num.
    cout << "the variable num is " << num << endl;
    cout << "i will now increment num.\n";
    
    //Use postfix ++ to increment num.
    num++;
    cout << "Now the bariable num is " << num << endl;
    cout << "I will increment num again.\n";
    
    //Use prefix ++ to increment num.
    ++num;
    cout << "Now the variavle num is " << num << endl;
    cout << "I will now decrement num.\n";
    
    //Use postfix -- to decrement num.
    num--;
    cout << "Now the variable num is " << num << endl;
    
    
    
    return 0;
}
