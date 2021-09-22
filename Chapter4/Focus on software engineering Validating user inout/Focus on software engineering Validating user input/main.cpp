// Program 4-19 is a test scoring program that rejects any test score less than 0 or greater than 100.
// This test scoring program does not accept test scores that are less than 0 or greater than 100.
#include <iostream>
using namespace std;

int main ()
{

    //Constants for grade thressholds
    const int a_score = 90, b_score = 80, c_score = 70, d_score = 60, min_score = 0, max_score = 100;
    
    int test_score; //To hold a numeric test score
    
    //Get the numeric test score,
    cout << "Enter your numeric test score and I will tell you the letter grade you earned: ";
    cin >> test_score;
    
    //Validate the input and determine the grade.
    if (test_score >= min_score && test_score <= max_score)
    {
        if (test_score >= a_score)
            cout << "Your grade is A.\n";
        else if (test_score >= b_score)
            cout << "Your grade is B.\n";
        else if (test_score >= c_score)
            cout << "Your grade is C.\n";
        else if (test_score >= d_score)
            cout << "Your grade is D.\n";
        else
            cout << "Your grade is F.\n";
    }
    else
    {
        //An invalid score was entered.
        cout << "That is an invalid score. Run the program again and enter a value in the range of\n"
        << min_score << " Through " << max_score << " .\n ";
    }

    return 0;
}
