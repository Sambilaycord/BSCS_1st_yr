#include <iostream>

using namespace std;

int main(){
    double distance, miles_gallon, price_gallon, cost;
    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter miles per gallon: ";
    cin >> miles_gallon;
    cout << "Enter price per gallon: ";
    cin >> price_gallon;

    distance = distance / miles_gallon;
    cost = distance * price_gallon;

    cout << "The cost of driving is $" << cost;
}