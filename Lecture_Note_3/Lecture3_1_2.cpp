#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, discriminant, root1, root2;

    // prompt the user to enter values for a, b, and c
    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    // calculate the discriminant using the formula b^2 - 4ac
    discriminant = pow(b, 2) - 4 * a * c;

    // check the value of the discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "The root is " << root1 << endl;
    }
    else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}
