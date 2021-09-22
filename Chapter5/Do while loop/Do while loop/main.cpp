/*
 You should use the do-while loop when you want to make sure the loop executes at least once. For example, Program 5-7 averages a series of three test scores for a student. After the average is displayed, it asks the user if he or she wants to average another set of test scores.
 The program repeats as long as the user enters Y for yes.
 
 **/
//// This program averages 3 test scores. It repeats as many times as the user wishes.
#include <iostream>
using namespace std;


int main()
{

    int score1, score2, score3;  //Three scores
    double average;              //Average score
    char again;                  //To hold Y or N input
    
    do
    {
        //Get three scores.
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;
        
        //Calculate and display the average.
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << ".\n";
        
        //Does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    

    return 0;
}
