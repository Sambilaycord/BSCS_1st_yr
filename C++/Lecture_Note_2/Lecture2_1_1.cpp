#include <iostream>

using namespace std;

int main(){
    const double PI = 3.14159265359;
    double radius, length, area, volume;
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;

    area = radius * radius * PI;
    volume = area * length;

    cout << "The area is: " << area << endl;
    cout << "The volume is " << volume << endl;
}