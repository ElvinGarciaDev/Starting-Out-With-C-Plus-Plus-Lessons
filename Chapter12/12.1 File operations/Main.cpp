// This program uses an fstream object to write data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile;

    cout << "Opening file...\n";
    dataFile.open("demofile.txt", ios::out);    //Open for output
    
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    dataFile << "Elvin\n";

    dataFile.close(); //close the file
    cout << "Done.\n";
    


    return 0;
}