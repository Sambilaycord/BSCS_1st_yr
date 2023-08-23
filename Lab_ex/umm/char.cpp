//Lab Exercise 2 - Set B

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    int count = 0;
    
    cout << "Enter a word or phrase: ";
    getline(cin, input);
    
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || 
            input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
                count++;
            }
        }
    
    cout << "The number of vowels in the file: " << count;
    
    fstream akongFile("file.txt");
    akongFile << "The number of vowels in the file: " << count;
    akongFile.close();
    return 0;
}
