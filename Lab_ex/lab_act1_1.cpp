#include <iostream>
using namespace std;

int main(){
    int dividend, divisor, quotient = 0, remainder = 0;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    while(dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    remainder = dividend;
    cout << "Remainder: " << remainder << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}