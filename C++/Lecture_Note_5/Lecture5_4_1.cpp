#include <iostream>
using namespace std;

int main(){
    int num;

    // prompt user for input
    cout << "Enter an integer between 1 and 15: ";
    cin >> num;

    // check if input is valid
    if (num < 1 || num > 15)
    {
        cout << "Invalid input! Please enter an integer between 1 and 15." << endl;
        return 0;
    }

    // display pyramid
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num-i; j++){
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
