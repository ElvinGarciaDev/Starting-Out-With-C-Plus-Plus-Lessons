//This program is used to find the average age of the numer of people you wish to enter. You can enter as much ages as you want
#include <iostream>
using namespace std;


int main()
{

    int age; //place to store age
    int age_total = 0;  //We need to know how many ages were entered ACCUMULATOR
    int number_of_people_entered = 0;  //this will be used for the average
    
    cout << "Enter first persons age or -1 to quit" << endl;
    cin >> age;
    
    while (age != -1)
    {
        age_total = age_total + age;
        number_of_people_entered++;  //This will add the numbwe of people added to 1
        
        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }
    
    cout << "NUmber of people entered: " << number_of_people_entered << endl;
    cout << "Average age : " << age_total / number_of_people_entered;
    
    return 0;
}
