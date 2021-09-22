#include <iostream>
using namespace std;


int main()
{

    int num[7];
    
    //create the array
    for (int i = 0; i < 6; i++)
    {
        cout << "Please enter value #" << (i + 1) << ": ";
        cin >> num[i];
    }
    
    
    //This is the sort
    for (int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            int temp;
            
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    //display the array
    for (int i = 0; i < 6; i++)
    {
        cout << num[i] << endl;
    }
    
    return 0;
}
