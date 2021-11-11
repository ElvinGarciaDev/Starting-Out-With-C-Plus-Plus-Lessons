#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
using namespace std;
#include "Instructor.h"
#include "TextBook.h"

class Course
{
    private:
        string courseName;      //Course name
        Instructor instructor;  //Instructor
        TextBook textbook;      //Textbook
    public:
        //Constructor
        Course(string course, string instLastName, string instFirstName, string instOffice, string textTitle, string author, string publisher)
        { //Assign the course name
            courseName = course;

            //Assign the instructor
            instructor.set(instLastName, instFirstName, instOffice);

            //Assign the book
            textbook.set(textTitle, author, publisher); }

        //Print the function
        void print() const
        {
            cout << "Course name: " << courseName << endl << endl;
            cout << "Instructor Information:\n"; 
            instructor.print();
            cout << "\nTextbook Information:\n";
            textbook.print();
            cout << endl;
        }
};

#endif