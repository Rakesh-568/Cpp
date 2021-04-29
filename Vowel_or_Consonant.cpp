/*Program to check whether a character is a vowel or a Consonant*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') /* Here || (or) operator is used to check the given character is vowel or consonant , by checking the character with all the vowels*/
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}

/*Output:
Enter the character: i
Vowel

Enter the character: p
Consonant*/
