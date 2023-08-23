#include <iostream>

using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Enter the coordinates of the first line (x1, y1, x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    cout << "Enter the coordinates of the second line (x3, y3, x4, y4): ";
    cin >> x3 >> y3 >> x4 >> y4;

    // Calculate the slopes and y-intercepts of the two lines
    float m1 = (y2 - y1) / (x2 - x1);
    float b1 = y1 - m1 * x1;

    float m2 = (y4 - y3) / (x4 - x3);
    float b2 = y3 - m2 * x3;

    // Calculate the x-coordinate of the intersection point
    float x_intersect = (b2 - b1) / (m1 - m2);

    // Calculate the y-coordinate of the intersection point
    float y_intersect = m1 * x_intersect + b1;

    // Display the coordinates of the intersection point
    cout << "The coordinates of the intersection point are (" << x_intersect << ", " << y_intersect << ")" << endl;

    return 0;
}
