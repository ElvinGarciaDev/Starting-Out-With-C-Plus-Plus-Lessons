

#include <iostream>
using namespace std;
#include <string>

int main()
{

    string text;
    int age;

    cout << "How old are you?\n ";
    cin >> age;
    cin.ignore();
    
    cout << "What is your name?\n ";
    getline(cin, text);

    cout << "Hello, " << text << endl;


    return 0;
}

// if you ever use the order cin then getline you need to use the cin.ignore()
