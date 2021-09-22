// This program writes data to a file.
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

    ofstream outputFile;
    outputFile.open("demofile.txt");
    
    cout << "Now writing data to the file.\n";
    
    //Write four names to the file.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";
    outputFile << "Elvin\n";
    
    //Close the file
    outputFile.close();
    cout << "Done.\n";

    
    
    return 0;
}
/*
 Program 5-15 demonstrates opening a file, writing data to the file, and closing the file. After this code has executed, we can open the demofile.txt file using a text editor and look at its contents. Figure 5-15 shows how the file’s contents will appear in Notepad.
 **/
