#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a word or statement: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || 
        input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
            count++;
        }
    }

    cout << "Number of vowels: " << count << endl;

    return 0;
}
