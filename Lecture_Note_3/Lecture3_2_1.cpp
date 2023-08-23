#include <iostream>

using namespace std;

int main(){
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    if (int1 % int2 == 0){
        cout << int1 << " is divisible by " << int2;
    }else {
        cout << int1 << " is not divisible by " << int2;
    }
}