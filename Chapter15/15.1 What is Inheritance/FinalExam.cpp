#include "FinalExam.h"

//********************************************************
// set function *
// The parameters are the number of questions and the *
// number of questions missed. *
//********************************************************

void FinalExam::set(int questions, int missed)
{
    double numericScore;    //To hold the numeric score

    //set the number of questions and number missed
    numQuestions = questions;
    numMissed = missed;

    //Calculate the points for each questions
    pointsEach = 100.0 / numQuestions;

    //calculaye the numeric scrore for this exam.
    numericScore = 100.0 - (missed * pointsEach);

    //Call the inherited setScore function to set the numeric score
    setScore(numericScore);

    //Call the adjusted function to adjust the score
    adjustScore();

}

//**************************************************************
// Definition of Test::adjustScore. If score is within *
// 0.5 points of the next whole point, it rounds the score up *
// and recalculates the letter grade. *
//**************************************************************

void FinalExam::adjustScore()
{
    double fraction = score - static_cast<int>(score);

    if (fraction >= 0.5)
    {
        //Adjust the score variable in the gardedActivity class
        score += (1.0 - fraction);
    }
}