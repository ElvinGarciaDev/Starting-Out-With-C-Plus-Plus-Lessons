// This program demonstrates a base class and a derived class.
#include <iostream>
#include "FinalExam.h"
#include <iomanip>
using namespace std;

int main()
{
    int questions;  //Number of questions on the exam
    int missed;     //Number of questions missed by the student

    //get the number of questions on the final exam.
    cout << "How many questions sre on the final exam: ";
    cin >> questions;

    //Get the numner of questions missed
    cout << "How many questions did the student miss: ";
    cin >> missed;

    //Define a finalexam object and initialize it with
    //The valyes entered
    FinalExam test(questions, missed);

    //Disp[lay the test resaults
    cout << setprecision(2);
    cout << "\n Each question counts " << test.getPointsEach()
         << " points.\n";
    cout << "The exam score is " << test.getScore() << endl;
    cout << "The exam grade is " << test.getLetterGrade() << endl;

    return 0;
}