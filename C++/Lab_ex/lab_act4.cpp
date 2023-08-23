#include <iostream>

using namespace std;

void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;

    for (int i = ch1; i <= ch2; i++) {
        cout << i << " ";
        count++;

        if (count == numberPerLine) {
            cout << endl;
            count = 0;
        }
    }
    cout << endl;
}


int main() {
    char ch1 = 'y';
    char ch2 = 'j';
    int numberPerLine = 3;

    printASCII(ch1, ch2, numberPerLine);

    return 0;
}



