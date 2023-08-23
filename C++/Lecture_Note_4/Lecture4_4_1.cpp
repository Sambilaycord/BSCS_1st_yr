#include <iostream>

using namespace std;

int main(){
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    
    if (isalpha(letter)){
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ||
            letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
            cout << letter << " is a vowel";
        else 
            cout << letter << " is a consonant";
    }
    else
        cout << letter << " is an invalid input";
}