#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    float root1, root2, discriminant, real, imaginary;
    cout << "Enter the coefficients of the quadratic equation(ax^2+bx+c): ";
    cin >> a >> b >> c;
    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (+b + sqrt(discriminant)) / (2 * a);
        cout << "Real and different roots: " << endl
             << root1 << endl
             << root2;
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << "Real and same roots: " << endl
             << root1 << endl
             << root2;
    }
    else if (discriminant < 0)
    {
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "Complex and different roots: " << endl
             << real << "+" << imaginary << "i" << endl
             << real << "-" << imaginary << "i";
    }
    return 0;
}
/*Output
Enter the coefficients of the quadratic equation(ax^2+bx+c): 1
-6
13
Complex and different roots: 
3+2i
3-2i
*/