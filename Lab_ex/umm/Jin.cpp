#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream userfile {"userfile.txt"};
    int x1, x2, x3;
    userfile >> x1 >> x2 >> x3;

    int prod = x1 * x2 * x3;
    int sum = x1 + x2 + x3;
    double ave = sum/3;

    cout << "prod: " << prod << endl;
    cout << "sum: " << sum << endl;
    cout << "ave: " << ave << endl;

    return 0;
}