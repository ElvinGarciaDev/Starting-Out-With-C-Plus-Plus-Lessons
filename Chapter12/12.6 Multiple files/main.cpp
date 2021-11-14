// This program demonstrates reading from one file and writing
// to a second file.
#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // Needed for the toupper function.
using namespace std;

int main()
{
    string fileName;    //to hold the file name
    char ch;            //To hold a character
    ifstream inFile;    //Inputfile objecy

    //Open a file for output
    ofstream outFile("out.txt");

    //get the input file name
    cout << "Enter the file name: ";
    cin >> fileName;

    //open the file input
    inFile.open(fileName);

    //Id the input file opened continue
    if (inFile)
    {
        //read a char from file 1
        inFile.get(ch);

        //While the 
    }




    return 0;
}