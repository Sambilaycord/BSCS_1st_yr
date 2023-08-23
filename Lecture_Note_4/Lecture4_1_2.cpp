#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;
const double EARTH_RADIUS = 6371.0; // in kilometers

double toRadians(double degrees) {
    return degrees * PI / 180.0;
}

double greatCircleDistance(double lat1, double lon1, double lat2, double lon2) {
    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);
    double a = sin(dLat/2) * sin(dLat/2) +
               cos(toRadians(lat1)) * cos(toRadians(lat2)) *
               sin(dLon/2) * sin(dLon/2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return EARTH_RADIUS * c;
}

int main() {
    double lat1, lon1, lat2, lon2;
    cout << "Enter the latitude and longitude of point 1 in degrees: ";
    cin >> lat1 >> lon1;
    cout << "Enter the latitude and longitude of point 2 in degrees: ";
    cin >> lat2 >> lon2;
    double distance = greatCircleDistance(lat1, lon1, lat2, lon2);
    cout << "The great circle distance between the two points is: " << distance << " km" << endl;
    return 0;
}
