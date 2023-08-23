#include <iostream>
using namespace std;

int main(){
    int num1, num2, result = 0;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    for(int i = num2; i > 0; i--) {
        result += num1;
    }

    cout << "result: " << result << endl;

    return 0;
}