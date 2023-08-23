#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, discriminant, r1, r2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    discriminant = pow(b, 2) - 4 * a * c;

    if(discriminant > 0){
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << r1 << " and " << r2;
    }else if(discriminant == 0){
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << r1;
    }else{
        cout << "The equation has no real roots";
    }

}