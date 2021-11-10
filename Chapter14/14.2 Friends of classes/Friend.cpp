#include <iostream>
using namespace std;

class StankFist
{
    private:
        int stinkyVar;
    public:
        StankFist()
        { stinkyVar = 0; } //constructor. sets var to 0

        friend void stinkysFriend(StankFist &sfo); //FUnction prototype it will take an object as a reference 



};

void stinkysFriend(StankFist &sfo) //accepts an object of type StankFist. Will allow you to change the value. 
{
    sfo.stinkyVar = 99;
    cout << sfo.stinkyVar << endl;
}


int main()
{
    StankFist bob;

    stinkysFriend(bob);



    return 0;
}