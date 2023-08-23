#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;
    int vowels = 0;
    fstream myFile("kek.txt");

    cout << "Enter a word or phrase: ";
    getline(cin, input);

        for (int i = 0; i < input.length(); i++) {
            if (input [i] == 'a' || input[i] == 'A'
                || input[i] == 'e' || input[i] == 'E'
                || input[i] == 'i' || input[i] == 'I'
                || input[i] == 'o' || input[i] == 'O'
                || input[i] == 'u' || input[i] == 'U'
            ) 
                vowels++;
            }

    myFile << "number of vowels: " << vowels;
    cout << "number of vowels: " << vowels;
    myFile.close();
}