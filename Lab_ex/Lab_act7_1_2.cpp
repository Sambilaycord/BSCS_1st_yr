#include <iostream>
#include <string>

using namespace std;

class DigitCounter {
private: 
    string s;
    int counts[];
public:
    int* count(const string& s) {  //The first function is useful when you want to create a new array to store the counts and access it outside the function
        int* counts = new int[10]{0}; 
        for (char c: s){
            if (isdigit(c)) {
                int digit = c - '0';
                counts[digit]++;
            }
        }
        return counts;
    }

    void count(const string& s, int counts[], int size) {  //the second function is useful when you already have an array and want to update its values within the function itself.
        for (char c: s){
            if (isdigit(c)) {
                int digit = c - '0';
                if (digit >= 0 && digit < size) {
                    counts[digit]++;
                }
            }
        }
    }
};

int main() {
    string inputS;
    cout << "Input string: ";
    getline(cin, inputS);
    string s = "SSN is 343 32 4545 and ID is 434 34 4323";

    DigitCounter counter;
    int* counts = counter.count(inputS);

    //int counts[10]{0}; // Create an array to store the counts
    //counter.count(inputS, counts, 10); // Call the void function and pass the array and its size


    cout << "Occurrences of each digit:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << ": " << counts[i] << endl;
    }

    delete[] counts;
    return 0;
    
}
