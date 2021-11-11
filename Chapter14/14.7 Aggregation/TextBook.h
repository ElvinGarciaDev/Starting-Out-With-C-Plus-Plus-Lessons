#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <iostream>
#include <string>
using namespace std;

//TextBook class
class TextBook
{
    private:
        string title;       //Book title
        string author;      //Auther name
        string publisher;   //Publisher name
    public:
        //Default constructor stores empty string
        TextBook()
        {  set("", "", ""); }

        //Constructor
        TextBook(string textTitle, string auth, string pub)
        {  set(textTitle, auth, pub); }

        //Set function
        void set(string textTitle, string auth, string pub)
        {
            title = textTitle;
            author = auth;
            publisher = pub; }

        //Print function
        void print() const
        {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publisher: " << publisher << endl;
        }
};
#endif
