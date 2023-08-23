#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class MyInteger{
private:
    int value = 0;
    
public:
    MyInteger(int value) {
        this->value = value;
    }
    const int getVal(){
        return value;
    }

    bool isEven() const {
        return (value % 2) == 0;
    }
    bool  isOdd() const{
        return (value % 2) != 0;
    }
    bool isPrime() const{
        if (value <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(value); i++) {
            if (value % i == 0) {
                return false;
            }
        }
        return true;
    }

    static bool isEven(int value){
        return value % 2 == 0;
    }

    static bool isOdd(int value){
        return value % 2 != 0;
    }

    static bool isPrime(int value) {
        if (value <= 1)
            return false;

        for (int i = 2; i <= sqrt(value); i++) {
            if (value % i == 0)
                return false;
        }

        return true;
    }

    static bool isEven(const MyInteger& obj){
        return obj.value % 2 == 0;
    }

    static bool isOdd(const MyInteger& obj){
        return obj.value % 2 != 0;
    }

    static bool isPrime(const MyInteger& obj){
        if (obj.value <= 1)
            return false;

        for (int i = 2; i <= sqrt(obj.value); i++) {
            if (obj.value % i == 0)
                return false;
        }

        return true;
    }

    bool equals(int value) const {
        return this->value == value;
    }

    bool equals(const MyInteger& obj) const {
        return this->value == obj.value;
    }

    static int parseInt(const string& str) {
        return stoi(str);
    }
};

int main(){
    int n1, n2, n3;
    string Strnum;
    cout << "Enter 3 values: ";
    cin >> n1 >> n2 >> n3;
    cout << "Enter a num in string form: ";
    cin >> Strnum;
    MyInteger num1(n1), num2(n2), num3(n3);

    cout << "\nValue for object 1: " << num1.getVal()<<endl;
    cout << "Is Object 1 Even? : " << num1.isEven()<<endl;
    cout << "Is Object 1 Odd? : " << num1.isOdd()<<endl;
    cout << "Is Object 1 Prime? : " << num1.isPrime()<<endl;

    cout << "\nValue for object 2: " << num2.getVal()<<endl;
    cout << "Is Object 2 Even? : " << num2.isEven(n2)<<endl;
    cout << "Is Object 2 Odd? : " << num2.isOdd(n2)<<endl;
    cout << "Is Object 2 Prime? : "<< num2.isPrime(n2)<<endl;

    cout << "\nValue for object 3: " << num3.getVal()<<endl;
    cout << "Is Object 3 Even?: " << num3.isEven(num1)<<endl;
    cout << "Is Object 3 Odd?: " << num3.isOdd(num1)<<endl;
    cout << "Is Object 3 Prime?: " << num3.isPrime(num1)<<endl;

    cout << "\nIs Object 1 Equals to Object 2?: " << num1.equals(n2)<<endl;
    cout << "Is Object 1 Equals to Object itself?: " << num1.equals(n1)<<endl;

    cout << "\nInteger "<< Strnum << " to int : "<< num3.parseInt(Strnum)<<endl;


    return 0;
}
