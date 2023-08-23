#include <iostream>

using namespace std;

int main(){
    int num, sum = 0;

    cout << "Enter a number between 0 and 1000: ";
    cin >> num;

    if(num < 0 || num > 1000){
        cout << "Invalid Input";
    }else{while(num != 0){
        sum += num % 10;
        num /= 10;
        }
    }
    cout << "The sum of the digits is " << sum;
}