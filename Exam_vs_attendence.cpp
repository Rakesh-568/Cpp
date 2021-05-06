/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include <iostream>
using namespace std;
int main()
{
    int total, attended, percentage;
    cout << "Enter the total number of classes: ";
    cin >> total;
    cout << "Enter the number of classes attended: ";
    cin >> attended;
    percentage = (attended * 100) / total; /*Percentage between A,B is A/B=Perceent/100 => (A*100)/B  where B is the total*/
    cout << "Percentage of classes attended: " << percentage << "%" << endl;
    if (percentage < 75)
    {
        cout << "Not allowed into the exam";
    }
    else
    {
        cout << "Allowed into the exam";
    }
    return 0;
}
/*Output
Enter the total number of classes: 300
Enter the number of classes attended: 200
Percentage of classes attended: 66%
Not allowed into the exam
*******************************
Enter the total number of classes: 300
Enter the number of classes attended: 290
Percentage of classes attended: 96%
Allowed into the exam*/