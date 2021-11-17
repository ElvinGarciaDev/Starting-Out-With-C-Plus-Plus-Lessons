//Buckys C++ Programming Tutorials - 55 - Introduction to Polymorphism

#include <iostream>
using namespace std;

class Enemy
{
    protected: //means it's not avaliable to all code but is avaliable to derived classes
        int attackPower;
    public:
        void setAttackPower(int a)
        { attackPower = a;  }  
};

class Ninja: public Enemy
{
    public:
        void attack()
        {  cout << "I am a ninja, ninja chop! -" << attackPower << endl;  }
};

class Monster: public Enemy
{
    public:
        void attack()
        {  cout << "Monster must eat you!!! -" << attackPower << endl;  }
};


int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n; //because ninja is of type enemy, this is valid
    Enemy *enemy2 = &m; //Anything that an enemy can do, monsters can do.

    enemy1->setAttackPower(29); //all monstors have an attack power from the base class
    enemy2->setAttackPower(99);

    n.attack(); //Now we can call the attacj method described in each derived class
    m.attack();
    
    return 0;
}