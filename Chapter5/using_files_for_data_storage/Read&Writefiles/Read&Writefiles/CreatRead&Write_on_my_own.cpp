//I will create a file and let the user input into it. The I will open and read the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{

    ifstream outputfile; //Create object.
    string filename;     //Letting the user open the file they want.
    
    cout << "Enter the file name you want to open: "; //Ask the user to enter the file they want to open.
    cin >> filename;
    
    outputfile.open(filename);                          //Open the file with the variable filename.which hold userinput
    
                                                        //Make sure file is open
    if(outputfile.is_open())
    {
        string line;                                    //Create variable to hold lines in text. to later print
        
        while (getline(outputfile,line))                //Use a loop to print the line variable. 
        {
            cout << line << endl;        //Print line variable
        }
        outputfile.close();
        
    }
    else
    {
        cout << "File did not open. make sure you type the full file name. ";
    }
    
    
    return 0;
}

/**
 This shows you how to create file
 
 ofstream inputfile;                 //Creating object.
 string name1, name2, name3, name4; //letting the user enter names to store in file
 
 
 inputfile.open("listofnames.txt"); //open/create the file

 //Let the user input the names they want to save
 cout << "Enter the first name you want to save: ";
 cin >> name1;
 cout << "Enter the second name you want to save: ";
 cin >> name2;
 cout << "Enter the third name you want to save: ";
 cin >> name3;
 cout << "Enter the fourth name you want to save: ";
 cin >> name4;
 
 //Save names to the file. Use object to store the name variables
 inputfile << name1 << endl;
 inputfile << name2 << endl;
 inputfile << name3 << endl;
 inputfile << name4 << endl;
 
 inputfile.close();
 
 */
