#include <iostream>

using namespace std;

int main(){
    string city1, city2, city3;
    cout << "Enter the first city: ";
    getline(cin, city1);
    cout << "Enter the second city: ";
    getline(cin, city2);
    cout << "Enter the third city: ";
    getline(cin, city3);

    cout << "The three cities in alphabetical order are: ";
    if (city1 < city2 && city1 < city3){
        if (city2 < city3)
            cout << city1 << ", " << city2 << ", " << city3 << endl;
        else
            cout << city1 << ", " << city3 << ", " << city2 << endl;
    }
    else if (city2 < city1 && city2 < city3){
        if (city1 < city3)
            cout << city2 << ", " << city1 << ", " << city3 << endl;
        else
            cout << city2 << ", " << city3 << ", " << city1 << endl;
    }
    else {
        if (city1 < city2)
            cout << city3 << ", " << city1 << ", " << city2 << endl;
        else
            cout << city3 << ", " << city2 << ", " << city1 << endl;
    }

    return 0;
}