/* Program to add two numbers*/
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, result; /* Variable declaration*/
    cout << "Enter your first number: ";
    cin >> n1;
    cout << "Enter your second number: ";
    cin >> n2;
    result = n1 + n2; /*Sum of two numbers is stored in the variable result*/

    cout << "Result is: " << result; /* Print the Sum */
    return 0;
}

/* Output 
Enter your first number: 4
Enter your second number: 6
Result is: 10
*/