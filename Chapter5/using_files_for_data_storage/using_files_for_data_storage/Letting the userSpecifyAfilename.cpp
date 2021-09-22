#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

    
    ifstream inputFile;
    string filename;
    string name;
    
    //Get the filename from the user.
    cout << "Enter the filename: ";
    cin >> filename;
    
    //open the file
    inputFile.open(filename);
    
    //if the file successfully opened, proccess it.
    if (inputFile.fail())
    {
        cout << "Error opening file.\n";
    }
    else
    {
        //Read the numbers from the file and display them.
        while (inputFile >> name)
        {
            cout << name << endl;
        }
        
        //clsoe the file.
        inputFile.close();
    }
    
    
    
    
}
