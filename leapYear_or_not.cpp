/*Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
}
/*Output:
Enter the year: 2400
Leap Year
*******************************
Enter the year: 2011
Not a Leap Year
*/