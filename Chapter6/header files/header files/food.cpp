#include <iostream>
using namespace std;
#include "Food.h"


const char* RecommendMeAFood(char firstLetter)

{
    if (firstLetter == 'a' || firstLetter == 'A')
        return "apple";
    else if (firstLetter == 'b' || firstLetter == 'B')
        return "banana";
    else if (firstLetter == 'c' || firstLetter == 'C')
        return "cholcate cake";
    else return "pizza";
}

//This is where I can write all the funciton statements. This is also called an implementation file.

void GetPizzaRecipe()
{
    cout << "To make pizza you need... ";
}
