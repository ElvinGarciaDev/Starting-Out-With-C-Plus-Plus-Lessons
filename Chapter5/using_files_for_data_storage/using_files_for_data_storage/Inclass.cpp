/*
17.  Sales Bar Chart
Write a program that asks the user to enter todayís sales for five stores.
The program should then display a bar graph comparing each storeís sales.
Create each bar in the bar graph by displaying a row of asterisks.
Each asterisk should represent $100 of sales.
Here is an example of the programís output.
Enter today's sales for store 1:  1000 [Enter]
Enter today's sales for store 2:  1200 [Enter]
Enter today's sales for store 3:  1800 [Enter]
Enter today's sales for store 4 : 800 [Enter]
Enter today's sales for store 5: 1900 [Enter]

SALES HORIZONTAL BAR CHART (Each * = $100)
Store 1: **********
Store 2: ************
Store 3: ******************
Store 4: ********
Store 5: ******************

Get integer values from user or frokm file for five stores. Use a loop to print out a
horizontal view of asterisks by dividing the sales by 100.

*/
#include <iostream>
#include <fstream> // istream ostream .open .close
#include <string>
using namespace std;
int main() {
    //ofstream, ifstream
    fstream getSalesFromFile,    //readSalesFromFile
            getStoreNumberFromFile,
            putChartToFile;        //writeChartToFile
                                //http://www.cplusplus.com/reference/fstream/fstream/open/
    cout << "\nThe file we are attempting to read has a open state of: "
        << getSalesFromFile.is_open();
//relative path to file
    getSalesFromFile.open("sales.txt", fstream::in); //getting values for store sales
    getStoreNumberFromFile.open("storeNumber.txt", fstream::in); //getting values for store sales
    //absolute path to file
//    getSalesFromFile.open("C:\\Users\\livia\\source\\repos\\chapter5_17_SalesBarChart\\chapter5_17_SalesBarChart\\sales.txt", fstream::in)
        // C:\\Dell\\deleteMe.txt
    putChartToFile.open("salesChart.txt", fstream::out); //write values to file

    //unsigned long long int store1 = 0, store2 = 0, store3 = 0, store4 = 0, store5=0;
    typedef unsigned long long int siSales; //http://www.cplusplus.com/doc/tutorial/other_data_types/
    siSales getSales = 0, runningTotal=0, storeNumber;// , store2 = 0, store3 = 0, store4 = 0, store5 = 0;
    string storeName;
                                                      /*
    do{} while();
    while();
    */
    cout << "\nPlease enter the 5 store sales to generate a chart:\n"
        << "\nToday's sales for stores 1-5: ";
    putChartToFile << "\nToday's sales for stores 1-5: \n";

    //loop to draw bar chart
    for (; !getSalesFromFile.eof(); ) {
        // cin >> getSales; //Getting input from user aka keyboard
        getSalesFromFile >> getSales; //Getting input from file
        getline(getStoreNumberFromFile, storeName);
        if (getSalesFromFile.fail()) {//Input Validation
            cout << "\nNone Numeric. Try again\n";
            getSalesFromFile.clear();
            getSalesFromFile.ignore(5, '\n');
            //counter--; //?
            cout << "\nEnter today's sales for store " << storeName << " :";
        }
        else {
            cout << "\nStore " << storeName << ": "; // 1,000 / 100 = 10
            putChartToFile << "\nStore " << storeName << ": ";
            //    initiator          ; comperison true/false          ; accumulator
            for (int chartCounter = 0; chartCounter < (getSales / 100); chartCounter++) {
                cout << "*"; //**********
                putChartToFile << '*'; //**********,   "*" --> *\0
            }
            putChartToFile << '\n';
        }
        runningTotal += getSales;
    }
    cout << "\nTotal sales for today: " << runningTotal << " :";
    cout << "\nPress Enter to exit";
    cin.ignore(5, '\n');
    cin.get();
    getSalesFromFile.close();
    putChartToFile.close(); //writes to file after closing
    //bug, not closing the third object getting storenumber
    return 0;
}

