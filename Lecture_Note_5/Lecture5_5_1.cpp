#include <iostream>
using namespace std;

int main() {
    int num, largest, count;
    cout << "Enter integers (terminate with -1): ";
    cin >> num;

    while (num != -1) {
        if (num > largest) {
            largest = num;
            count = 1;
        }
        else if (num == largest) {
            count++;
        }
        cin >> num;
    }

    if (count > 0) {
        cout << "The largest integer is " << largest << " and it occurs " << count << " times." << endl;
    }
    else {
        cout << "No integers were entered." << endl;
    }
    return 0;
}