#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

double AreaOfHexagon(double length){
    double area = (6 * pow(length, 2)) / (4 * tan(PI/6));
    return area;
}

int main(){
    double length;
    cout << "Enter the side: ";
    cin >> length;
    double area = AreaOfHexagon(length);
    cout << "The area of the hexagon is: " << area;
}