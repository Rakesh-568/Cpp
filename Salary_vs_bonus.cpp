/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and years of service and print the net bonus amount.*/
#include <iostream>
using namespace std;
int main()
{
    int salary, bonus, service;
    cout << "Enter your salary:  " << endl;
    cin >> salary;
    cout << "Enter your years of service: " << endl;
    cin >> service;
    bonus = salary * 0.05;
    if (service > 5)
    {
        cout << "Your bonus amount is: " << bonus;
    }
    else
    {
        cout << "You get 0 Bonus";
    }
    return 0;
}
/*Output
Enter your salary:  
50000
Enter your years of service: 
4
You get 0 Bonus
**************************
Enter your salary:  
80000
Enter your years of service: 
7
Your bonus amount is: 4000*/