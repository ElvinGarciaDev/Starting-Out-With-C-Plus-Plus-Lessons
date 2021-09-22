//Dr. LaClaire gives four exams during the semester in her chemistry class. At the end of the semester she drops each student’s lowest test score before averaging the scores. She has asked you to write a program that will read a student’s four test scores as input, and calcu- late the average with the lowest score dropped
// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void getTestScores(double[], int); //This function will hold an array. Double[] and int is the size of the array
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4;  //Array size
    double testScores[SIZE],  //Array of test scores
           total,            //Total of the scores
           lowestScore,      //Lowest test score
           average;          //Average test score
    
    //set up numeric output formattin
    cout << fixed << showpoint << setprecision(1);
    
    //Get the test scores from the user.
    getTestScores(testScores, SIZE);
    
    //get the total of the test  scores.
    total = getTotal(testScores, SIZE);
    
    //Get the lowest test score.
    lowestScore = getLowest(testScores, SIZE);
    
    //subtract the lowest score from the total.
    total -= lowestScore;
    
    //Calculate the average. Divide by 3 because the lowest test score was dropped.
    average = total / (SIZE - 1);
    
    //Display the avaerage.
    cout << "The average with the lowest score dropped is " << average << ".\n";
    
    return 0;
}



//***********************************************************
// The getTestScores function accepts an array and its size *
// as arguments. It prompts the user to enter test scores, *
// which are stored in the array. *
//***********************************************************

void getTestScores(double scores[], int SIZE) //The getTestScores function has two parameters: |scores[]—A double array||| |size—An int specifying the size of the array that is passed into the scores[]parameter ||
{
    //Get each test score.
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the test score number " << (i + 1) << ": ";
        cin >> scores[i];       //Saving user input to paramater which will letter be saved to array used as arrgument
    }
}


//*****************************************************
// The getTotal function accepts a double array *
// and its size as arguments. The sum of the array's *
// elements is returned as a double. *
//*****************************************************

double getTotal(const double numbers[], int size)
{
    double total = 0; //Accumulator
    
    //add each element to total.
    for (int i = 0; i < size; i++)
        total += numbers[i];  //same as total = total + array element.
        
        //return the total.
        return total;
}


//*****************************************************
// The getLowest function accepts a double array and *
// its size as arguments. The lowest value in the *
// array is returned as a double. *
//*****************************************************

double getLowest(const double numbers[], int size)
{
    double lowest; //to hold the lowest value
    
    //get the first array's first element.
    lowest = numbers[0];
    
    //step through the rest of the array. when a value less than lowest is found, assign it to lowest.
    
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }
    
    //return the lowest value.
    return lowest;
}
