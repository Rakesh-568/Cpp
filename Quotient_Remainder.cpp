/* Program to print Quotient and Remainder of two numbers*/
#include <iostream>
using namespace std;
int main()
{
    int dividend, divisor;
    cout << "Enter dividend and divisor: " << endl;
    cin >> dividend >> divisor;
    cout << "Quotient: " << dividend / divisor << endl; /*Calculate the Quotient*/
    cout << "Remainder: " << dividend % divisor;        /*Calculate the remainder*/
    return 0;
}

/*Output:
Enter dividend and divisor:
4
12
Quotient:3
Remainder:0*/