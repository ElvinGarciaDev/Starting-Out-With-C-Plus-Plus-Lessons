//Nested loops
// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 
    int num_students, //Number of students
        num_tests;    //Number of tests per student
    
    double total,      //Accumulator for total scores
          average;      //Average test score.
    
    //Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);
    
    //Get the number of students
    cout << "This program averages test scores.\n For how many students do you have scores: ";
    cin >> num_students;
    
    //get the number of tests scores per student.
    cout << "How many test scores does each student have: ";
    cin >> num_tests;
    
    //Determine each students average score.
    for (int student = 1; student <= num_students; student++)
    {        total = 0;      //initialize the accumulator/
        for (int test = 1; test <= num_tests; test++)
        {
            double score;
            cout << "Enter score " << test << " for " << "student " << student << ": ";
            cin >> score;
            total += score;
        }
        average = total / num_tests;
        cout << "The average score for student " << student << " is " << average << ".\n\n";
    }
    
    
    
    return 0;
}

/*
 Program 5-14 is another test-averaging program. It asks the user for the number of students and the number of test scores per student. A nested inner loop, in lines 26 through 33, asks for all the test scores for one student, iterating once for each test score. The outer loop in lines 23 through 37 iterates once for each student
 **/
