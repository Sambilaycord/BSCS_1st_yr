#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

class Anagram {
public:
    Anagram() {
    }

    bool isAnagram(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        string sorteds1(s1);
        string sorteds2(s2);
        sort(sorteds1.begin(), sorteds1.end());
        sort(sorteds2.begin(), sorteds2.end());

        return (sorteds1 == sorteds2);
    }
};

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    Anagram anagramObj;

    if (anagramObj.isAnagram(s1, s2)) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
