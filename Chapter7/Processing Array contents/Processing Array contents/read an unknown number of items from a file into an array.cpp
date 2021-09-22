//Program 7-14 shows how this technique can be used to read an unknown number of items from a file into an array
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100; //Array size
    int numbers[ARRAY_SIZE];    //Array with 100 elements
    int count = 0;             //Loop counter variable
    ifstream inputFile;        //Input file stream object
    
    inputFile.open("numbers.txt"); //open the file.
    
    //Read the numbers from the file into the array
    //after this loop execuate, the count variable will hold
    // the number of valaues that were stored in the array.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;
        
        //close the file.
        inputFile.close();
    
    //Display the numbers read.
    cout << "The numbers are: ";
    for (int i = 0; i < count; i++)
        cout << numbers[i] << " ";
    cout << endl;
    
    
    return 0;
}


/* code to create file with numbers
 //This will create a file that we will need in the next program. I learend this in chapter 5.
 #include <iostream>
 #include <fstream>
 using namespace std;
 int main()
 {

     
     ofstream inputfile;  //Creating object
     int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;
     
     inputfile.open("numbers.txt");
     
     cout << "Enter the numbers you want to save: ";
     cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12;
     
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
     inputfile << num11 << endl;
     inputfile << num12 << endl;


     inputfile.close(); //close the file
     
     
     
     
     return 0;
 }

 **/
