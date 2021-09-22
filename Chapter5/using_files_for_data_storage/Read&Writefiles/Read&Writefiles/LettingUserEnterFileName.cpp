#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream file;          //Creat object.
    string filename;        //Create variable to get user to enter file they want
    
    //Get file name from user
    cout << "Enter the file name you want to open: ";
    cin >> filename;
    
    //open the file
    file.open(filename);        //use the variable filename to open what the user wants
    
    //Test if the file is open.
    if(file.is_open())
    {
        //create a variable to hold the lines in the text.
        string line;
        
        //Print the content
        while (getline(file,line))      ////Using the getline function will read the line of text and store it in line variable
        {
            cout << line << endl;        //Print line variable
        }
        file.close();
    }
    
    else
    {
        cout << "File did not open. Enter a valid file name. \n";
    }
    
    
    
    
    return 0;
}
