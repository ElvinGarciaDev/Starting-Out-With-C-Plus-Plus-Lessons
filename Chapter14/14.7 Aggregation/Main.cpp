#include <iostream>
#include <string>
using namespace std;
#include "Course.h"

int main()
{
    //Create a course object
    Course myCourse("Intro to Computer Science", //Course name
    "Morgan", "Peter", "RH3010",                 //Prof name and office
    "Starting out with c++", "Gaddis",           //Book title
    "Addison-Wesley");                           //textBook publisher

    //Display the cpurse info
    myCourse.print();

    return 0;
}