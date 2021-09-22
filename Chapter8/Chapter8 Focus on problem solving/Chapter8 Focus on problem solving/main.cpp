// Demetris Leadership Center (DLC) product lookup program
// This program allows the user to enter a product number
// and then displays the title, description, and price of
// that product.
#include <iostream>
#include <string>
using namespace std;
#include "Header.h"



int main()
{
    //Array of product IDS
    int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 921, 922};
    
    //Array of product titles
    string title[NUM_PRODS] =
    { "Six Steps to Leadership",
      "Six Steps to Leadership",
      "The Road to Excellence",
      "Seven Lessons of Quality",
      "Seven Lessons of Quality",
      "Seven Lessons of Quality",
      "Teams Are Made, Not Born",
      "Leadership for the Future",
      "Leadership for the Future"
    };
    
    //Array of product discriptions
    string description[NUM_PRODS] =
    {
        "Book","Audio CD","DVD",
        "Book","Audio CD","DVD",
        "Book","Book", "Audio CD"
    };
    
    
    //Array of product prices
    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.96};
    
    int prodNum; //To hold a product number
    int index; //To hold search results
    char again; //To hold a Y ort a N anser
    
    do
    {
        //get the desired product number
        prodNum = getProdNum(); //Calls the function
        
        //search for the product number,
        index = binarySearch(id, NUM_PRODS, prodNum);
        
        //Display the results of the search.
        if (index == -1)
            cout << "That product number was not found.\n";
        else
            displayProd(title, description, prices, index);
        
        //does the user want to do this again
        cout << "Would you like to look up another product? (y/n) ";
        cin >> again;
    }while (again == 'y' || again == 'Y');
    return 0;
}




/*
 
 The manager of the Telemarketing Group has asked you to write a program that will help order-entry operators look up product prices. The program should prompt the user to enter a product number and will then display the title, description, and price of the product.
 **/
