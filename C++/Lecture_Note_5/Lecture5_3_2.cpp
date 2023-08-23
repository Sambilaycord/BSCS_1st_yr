#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double rent = 1000; // initial rent
    double increase = 0.03; // yearly rent increase percentage
    double totalRent = 0; // total rent for one year starting five years from now

    // compute rent in five years
    for (int i = 1; i <= 5; i++)
    {
        rent = rent * (1 + increase);
    }
    cout << "Rent in five years: $" << rent << endl;

    // compute total rent for one year starting five years from now
    for (int i = 0; i < 12; i++)
    {
        rent = rent * (1 + increase);
        totalRent += rent;
    }
    cout << "Total rent for one year starting five years from now: $" << totalRent << endl;

    return 0;
}
