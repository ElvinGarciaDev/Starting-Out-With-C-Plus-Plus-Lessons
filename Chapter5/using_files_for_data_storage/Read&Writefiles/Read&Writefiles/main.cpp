//Letting the user open the file they want. 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 
    ifstream file;
    file.open("Friends.txt");

    if (file.is_open()) //make sure file is open
    {
        string line;  //Create variable to read the lines in the file

        while (getline(file, line))  //Using the getline function will read the line of text and store it in line variable
        {
            cout << line << endl; // display variable
        }
        file.close();
    }
    else
    {
        cout << "File not opened. \n";
    }

        




    return 0;
}

/*
Create a file. I did this on my own!!!
   
 
    ofstream file;                  //Creat an object. file is the object
     file.open("Friends.txt");      //open the file and name it.

     file << "Joe \n";              //With the object you created. you can print.
     file << "Chris\n";
     file << "Geri\n";

     file.close();                  //Close the file.

*/




