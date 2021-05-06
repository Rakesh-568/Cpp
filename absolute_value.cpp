/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int input;
    cout << "INPUT: ";
    cin >> input;
    if (input < 0)
    {
        cout << "OUTPUT: " << input * (-1);
    }
    else
    {
        cout << "OUTPUT: " << input;
    }
    return 0;
}
/*Output:
INPUT: 1
OUTPUT: 1
************
INPUT: -1
OUTPUT: 1*/