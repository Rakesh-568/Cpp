/*Program to take values of length and breadth of a rectangle from user and check if it is square or not.*/
#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter the length and breadth:  " << endl;
    cin >> length >> breadth;
    if (length == breadth)
    {
        cout << "It's a Square";
    }
    else
    {
        cout << "It's a Rectangle";
    }
    return 0;
}
/*Output
Enter the length and breadth:  
5
2
It's a Rectangle
******************************
Enter the length and breadth:  
4   
4
It's a Square
*/
