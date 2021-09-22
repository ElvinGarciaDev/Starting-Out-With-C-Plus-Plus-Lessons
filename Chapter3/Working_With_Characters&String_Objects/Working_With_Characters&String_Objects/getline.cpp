
#include <iostream>
using namespace std;
#include <string>

int main()
{
    string remainder;
    char ch1 = ' ', ch2 = ' ', ch3 = ' ', ch4 = ' ';
    
    

    

  //case 1: Use cin to read in a series of characters with no spaces
    cout << "Enter at least 4 characters with no spaces in between. " << endl;
    cin >> ch1 >> ch2 >> ch3 >> ch4;
    cout << "Case 1: You entered  " << ch1 << ch2 << ch3 << ch4 << endl;
     //Get any remaining characters with getline.
    getline(cin, remainder);
    cout << "This is the left over charachters " << remainder << endl;




    //case 2: Use cin to read in a series of characters with whitespace
    cout << "Enter at least 4 characters with spaces in between. " << endl;
    cin >> ch1 >> ch2 >> ch3 >> ch4;
    cout << "Case 2: You entered  " << ch1 << ch2 << ch3 << ch4 << endl;
    //Get any remaining characters with getline.
    getline(cin, remainder);
    cout << "This is the left over charachters " << remainder << endl;



   
    //case 3: Use cin.get() to input a series of characters with no spaces
    cout << "Enter at least 4 characters wit no spaces in between. " << endl;
    cin.get(ch1); //  read exacly one character from the input bufffer including spaces.
    cin.get(ch2);
    cin.get(ch3);
    cin.get(ch4);
    cout << "Case 3: You entered " << ch1 << ch2 << ch3 << ch4 << endl;
    //get any remaining characters with getline
    getline(cin, remainder);
    cout << "The remainder of the input buffer contained: " << remainder << endl;




    //Case 4: Use cin.get() to input a series of characters with whitespaces
    cout << "Enter at least 4 characetrs with space in between " << endl;
    cin.get(ch1); //  read exacly one character from the input bufffer including spaces.
    cin.get(ch2);
    cin.get(ch3);
    cin.get(ch4);
    cout << "Case 4: You entered  " << ch1 << ch2 << ch3 << ch4 << endl;
    //Get any remaining characters with getline.
    getline(cin, remainder);
    cout << "This is the left over charachters " << remainder << endl;



    return 0;

}
