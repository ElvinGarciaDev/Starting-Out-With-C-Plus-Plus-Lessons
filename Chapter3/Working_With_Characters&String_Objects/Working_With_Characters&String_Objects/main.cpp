#include <iostream>
using namespace std;
#include <string>

int main()
{

    string name;
    string city;
    
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);
    
    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    
    
    return 0;
}


//normal cin >> does not store anything after a blank space. ex Elvin garci. It will only store Elvin and keep garica as a left over. for the next cin >>
//getline(cin, variable) actually stores evyerthing and prints it.
