#include <iostream>
#include <string>

using namespace std;

class DigitCounter {
private: 
    string s;
    int counts[10];
public:
    void count(const string& s, int counts[], int size) {
        int* result = countDigits(s);
        for (int i = 0; i < size; i++) {
            counts[i] = result[i];
        }
        delete[] result;
    }

    int* countDigits(const string& s) {
        int counts[10] = {0}; // Initialize counts array with zeros

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (isdigit(c)) {
                int digit = c - '0';
                if (digit >= 0 && digit < 10) {
                    counts[digit]++;
                }
            }
        }

        int* result = new int[10];
        for (int i = 0; i < 10; i++) {
            result[i] = counts[i];
        }

        return result;
    }
};

int main() {
    string s = "SSN is 343 32 4545 and ID is 434 34 4323";
    int counts[10] = {0}; // Initialize counts array with zeros

    DigitCounter counter;
    counter.count(s, counts, 10);

    cout << "Occurrences of each digit:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << ": " << counts[i] << endl;
    }

    return 0;
}
