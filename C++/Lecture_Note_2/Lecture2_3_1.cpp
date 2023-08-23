#include <iostream>

using namespace std;

int main(){
    double weight, height, BMI;
    cout << "Enter weight in pounds: ";
    cin >> weight;
    cout << "Enter height in inches: ";
    cin >> height;

    weight = weight * 0.45359237;
    height = height * 0.0254;

    height = height * height;
    BMI = weight / height;

    cout << "BMI is " << BMI;
}