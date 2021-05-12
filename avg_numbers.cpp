/*Take 10 integers from keyboard using loop and print their average value on the screen.*/
#include <iostream>
using namespace std;
int main()
{
    int number, a = 0;
    cout << "Enter 10 numbers" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cin >> number;
        a = a + number;
    }
    cout << a;
    return 0;
}