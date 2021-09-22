// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;


int main ()
{

    //Constants for grade thresholds
    const int a_score = 90, b_score = 80, c_score = 70, d_score = 60;
    
    int testscore;  //To hold a numeric test score
    
    
    //Get the numeric test score.
    cout << "Enter your numeric test score and I will tell you the letter grade you earned: ";
    cin >> testscore;
    
    //Determine the letter grade.
    if (testscore >= a_score)
        cout << "Your grade is A.\n ";
    else if (testscore >= b_score)
        cout << "Your grade is a B.\n ";
    else if (testscore >= c_score)
        cout << "Your grade is a C.\n ";
    else if (testscore >= d_score)
        cout << "Your grade is a D.\n ";
    else
        cout << "Your grade is F.\n ";
    
    
    return 0;
}

//The general format shows braces surrounding each block of conditionally executed statements. As with other forms of the if statement, the braces are required only when more than one statement is conditionally executed.
