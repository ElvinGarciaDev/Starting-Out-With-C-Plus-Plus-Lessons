
#include <iostream>
using namespace std;

int main()
{
    
    int books;              // number od books to read
    int months;             // number of months spent reading
    double perMonth;        // average number of books per month
    
    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "How manu months will it take you to read them? ";
    cin >> months;
    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per month.\n";


    return 0;
}

// The variable books is an integer, bur its value is converted to a double before the division takes place. Without the type cast expression in line 15, integer division would have been performed, resulting in an incorrect answer.
