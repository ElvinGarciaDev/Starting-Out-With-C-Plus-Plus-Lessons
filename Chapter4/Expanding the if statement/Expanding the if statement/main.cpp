// This program averages three test scores

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const int high_score = 95; // A high score is 95 or greater
    int score1, score2, score3; // To hold three test scores
    double average;             // To hold the average score
    
    // Get the three test scores.
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    
    // Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;

    // If the average is a high score, congratulate the user.
    if (average > high_score)
    {
        cout << "Congratulations! that's a high score!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back! \n";
    }
    return 0;
}

// You can use brackets to to add more than one line for if statements cout 

