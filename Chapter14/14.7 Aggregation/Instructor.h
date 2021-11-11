#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
using namespace std;

//Instructor class
class Instructor
{
    private:
        string lastName;        //Last name
        string firstName;       //First name
        string officeNumber;    //Office number
    public:
        //The Default constructor stores empty string
        Instructor()
        {  set("", "", ""); }   //Call the set function

        //Constructor
        Instructor(string lname, string fname, string office)
        {  set(lname, fname, office); }

        //Set Function
        void set(string lname, string fname, string office)
        {
            lastName = lname;
            firstName = fname;
            officeNumber = office; }

        //Print function
        void print() const
        {
            cout << "Last name: " << lastName << endl;
            cout << "First name: " << firstName << endl;
            cout << "Office number: " << officeNumber << endl;}

};


#endif