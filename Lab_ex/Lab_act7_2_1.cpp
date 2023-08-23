#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
class DuplicateRemover {
public:
    void removeDuplicate(vector<T>& v) {
        vector<T> result;
        for (int i = 0; i < v.size(); i++) {
            if (find(result.begin(), result.end(), v[i]) == result.end()) {
                result.push_back(v[i]);
            }
        }
        v = result;
    }
};

int main() {
    DuplicateRemover<int> remover;
    vector<int> numbers;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    remover.removeDuplicate(numbers);

    cout << "Distinct integers: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
