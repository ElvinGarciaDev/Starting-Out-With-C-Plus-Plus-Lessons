#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivity.h"

class FinalExam : public GradedActivity
{
    private:
        int numQuestions;   //# of questions
        double pointsEach;  //Points for each question
        int numMissed;      //# of questions missed
    public:
        //Deafault constructor
        FinalExam()
        {   numQuestions = 0;
            pointsEach = 0.0;
            numMissed = 0; }

        //Constructor
        FinalExam(int questions, int missed)
        {  set(questions, missed); }

        //Setter functions
        void set(int, int); //Defined in FinalExam.cpp

        //Getter functions
        double getNumQuestions() const
        {  return numQuestions; }

        double getPointsEach() const
        {  return pointsEach; }

        int getNumMissed() const
        {  return numMissed; }
};

#endif