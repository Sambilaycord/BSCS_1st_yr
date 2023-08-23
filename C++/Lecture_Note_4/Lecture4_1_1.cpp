#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const double RADIUS = 6371, PI = 3.14159265358979323846;
    double x1, x2, y1, y2;

    cout << "Enter point 1 (latitude and longitude): ";
    cin >> x1 >> y1;
    cout << "Enter point 2 (latitude and longitude): ";
    cin >> x2 >> y2;

    double x1_rad = x1 * PI / 180;
    double x2_rad = x2 * PI / 180;
    double y1_rad = y1 * PI / 180;
    double y2_rad = y2 * PI / 180;

    double d = RADIUS * acos(sin(x1_rad) * sin(x2_rad) + cos(x1_rad) * cos(x2_rad) * cos(y1_rad - y2_rad));
    
    cout << "The distance between the two points is: " << d << " km";
}