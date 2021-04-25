/*Program to check whether a given number is even or odd*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) /*when a number is divided by 2 and if its remainder is equal to 0 then its an Even number*/
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}

/* Output:
Enter a number: 4
EVEN*/
