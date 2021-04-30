/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include <iostream>
using namespace std;
int main()
{
    int quantity, cost, temp;
    cout << "Enter the desired quantity: " << endl;
    cin >> quantity;
    cost = quantity * 100;
    if (cost > 1000)
    {
        temp = cost * 0.1;
        cout << "The cost is: " << cost - temp;
    }
    else
    {
        cout << "The cost is: " << cost;
    }
    return 0;
}

/*Output
Enter the desired quantity: 
5  
The cost is: 500
***************************
Enter the desired quantity: 
12
The cost is: 1080*/