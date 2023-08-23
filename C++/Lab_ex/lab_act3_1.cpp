#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str){
    string temp = "";
    
    int len = temp.length();
    for (int i = 0; i < len / 2; i++) {
        if (temp[i] != temp[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;
}