//This will create a file that we will need in the next program. I learend this in chapter 5. 
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    
    ofstream inputfile;  //Creating object
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    
    inputfile.open("TenNumbers.txt");
    
    cout << "Enter the numbers you want to save: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
    
    //save the numbers to the fil. Use the object to store the int variables.
    inputfile << num1 << endl;
    inputfile << num2 << endl;
    inputfile << num3 << endl;
    inputfile << num4 << endl;
    inputfile << num5 << endl;
    inputfile << num6 << endl;
    inputfile << num7 << endl;
    inputfile << num8 << endl;
    inputfile << num9 << endl;
    inputfile << num10 << endl;

    inputfile.close(); //close the file
    
    
    
    
    return 0;
}
