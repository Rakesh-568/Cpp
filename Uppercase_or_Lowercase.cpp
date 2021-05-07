/* Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "Upper";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "Lower";
    }
    return 0;
}
/* Output:
Enter the character: A
Upper
***************************
Enter the character: a
Lower */