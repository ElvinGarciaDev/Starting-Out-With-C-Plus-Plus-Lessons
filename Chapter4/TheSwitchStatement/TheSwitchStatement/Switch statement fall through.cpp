// This program is carefully constructed to use the "fall through" feature of the switch statement.
#include <iostream>
using namespace std;

int main()
{

    
    int model_num;   //Model number
    
    //Get a model number from the user.
    cout << "Our TVs come in three models:\n"
    << "The 100, 200, and 300. Which do you want?";
    cin >> model_num;
    
    //Display the model's features.
    cout << "That model has the following features:\n";
    switch (model_num)
    {
        case 300: cout << "Pictures-in-a-picture.\n";
        case 200: cout << "Stereo sound.\n";
        case 100: cout << "Remote control.\n";
                break;
        default: cout << "You can only chooise the 100, 200, or 300.\n";
    }
    
    
    return 0;
}



/*
 Without the break statement, the program “falls through” all of the statements below the one with the matching case expression. Sometimes this is what you want. Program 4-25 lists the features of three TV models a customer may choose from. The Model 100 has remote control. The Model 200 has remote control and stereo sound. The Model 300 has remote control, stereo sound, and picture-in-a-picture capability. The program uses a switch statement with carefully omitted breaks to print the features of the selected model.
*/
