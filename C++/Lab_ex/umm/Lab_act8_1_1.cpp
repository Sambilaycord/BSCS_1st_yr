#include <iostream>
#include <cmath>

using namespace std;

class Poly {
private:
    double a;
    double b;
    double c;

public:
    // Default constructor
    Poly() : a(0.0), b(0.0), c(0.0) {}

    // Constructor with caller-supplied values
    Poly(double a, double b, double c) : a(a), b(b), c(c) {}

    // Overloaded addition operator
    Poly operator+(const Poly& other) const {
        double sumA = a + other.a;
        double sumB = b + other.b;
        double sumC = c + other.c;
        return Poly(sumA, sumB, sumC);
    }

    // Overloaded output operator
    friend ostream& operator<<(ostream& os, const Poly& poly) {
        bool isFirstTerm = true;
        if (poly.a != 0.0) {
            os << poly.a << "x^2";
            isFirstTerm = false;
        }
        if (poly.b != 0.0) {
            if (isFirstTerm) {
                os << poly.b << "x";
                isFirstTerm = false;
            } else {
                if (poly.b > 0)
                    os << " + " << poly.b << "x";
                else
                    os << " - " << abs(poly.b) << "x";
            }
        }
        if (poly.c != 0.0) {
            if (isFirstTerm) {
                os << poly.c;
            } else {
                if (poly.c > 0)
                    os << " + " << poly.c;
                else
                    os << " - " << abs(poly.c);
            }
        }
        return os;
    }
};

int main() {
    Poly q1(-3.0, 11.0, 5.0);
    Poly q2(-11.0, 2.0, -7.0);
    Poly sum;

    sum = q1 + q2;

    cout << "q1: " << q1 << endl;
    cout << "q2: " << q2 << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
