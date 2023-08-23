#include <iostream>
#include <string>

using namespace std;

int main(){
    string str, temp = "";
    cout << "Enter a string: ";
    cin >> str;

    int len = str.length(); 
    cout << len << endl;

    for (int i = (len - 1); i >= 0; i--) {
      temp = temp + str[i];
      cout << "rawr: " << temp << endl;
    }

    if (str == temp) {
        cout << str << " is a palindrome" << endl;
    } else {
        cout << str << " is not a palindrome" << endl;
    }
}