/*Program to swap two numbers*/
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 16, temp;
    cout << "******* Values before Swapping: *********" << endl;
    ;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    /*Swapping*/
    temp = a;
    a = b;
    b = temp;
    cout << "******* Values after Swapping: *********" << endl;
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b;
    return 0;
}

/*Output:
******* Values before Swapping: *********
Value of a : 5
Value of b : 16
******* Values after Swapping: *********
Value of a : 16
Value of b : 5 */