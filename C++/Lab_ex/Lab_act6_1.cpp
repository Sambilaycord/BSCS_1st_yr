#include <iostream>
#include <string>
using namespace std;

class MyInteger {
public:
    int value = 0;

    MyInteger(int value) {
        value = value;
    }

    int getInt() {
        return value;
    }

    const bool isEven() {
        return value % 2 == 0;
    }

    const bool isOdd() {
        return value % 2 == 1;
    }

    const bool isPrime() {
        if (value <= 1) {
            return false;
        }

        for (int i = 2; i <= value / 2; ++i) {
            if (value % i == 0) {
                return false;
            }
        }

        return true;
    }

     static bool isEvenn(int value) {
        return value % 2 == 0;
    }

    static bool isOddd(int value) {
        return value % 2 == 1;
    }

    static bool isPrimee(int value) {
        if (value <= 1) {
            return false;
        }

        for (int i = 2; i <= value / 2; ++i) {
            if (value % i == 0) {
                return false;
            }
        }

        return true;
    }

    static bool isEvenn(const MyInteger& obj) {
        return obj.value % 2 == 0;
    }

    static bool isOddd(const MyInteger& obj) {
        return obj.value % 2 == 1;
    }

    static bool isPrimee(const MyInteger& obj) {
        if (obj.value <= 1) {
            return false;
        }

        for (int i = 2; i <= obj.value / 2; ++i) {
            if (obj.value % i == 0) {
                return false;
            }
        }

        return true;
    }

    const bool equals(int value) {
        return value == value;
    }

    const bool equals(const MyInteger& obj) {
        return value == obj.value;
    }

    static int parseInt(const string& str) {
        return stoi(str);
    }
};

int main() {
    int n1, n2, n3;
    string Strnum;
    cout<<"Enter 3 values: "<<endl;
    cin>>n1>>n2>>n3;
    cout<<"Enter a num in string form: ";
    cin>>Strnum;
    MyInteger num(n1), num1(n2), num2(n3);


    cout<<"Value for object 1: " << num.getInt()<<endl;


    cout<<"Object 1 Even? : "<<num.isEven()<<endl;
    cout<<"Object 1 Odd? : "<<num.isOdd()<<endl;
    cout<<"Object 1 Prime? : "<< num.isPrime()<<endl;

    cout<<"Value for object 2: " << num1.getInt()<<endl;
    cout<<"Object 2 Even? : "<<num1.isEven()<<endl;
    cout<<"Object 2 Odd? : "<<num1.isOdd()<<endl;
    cout<<"Object 2 Prime? : "<< num1.isPrime()<<endl;

    cout<<"Value for object 3: " << num2.getInt()<<endl;
    cout<<n3<<" is Even?: "<< num2.isEven()<<endl;
    cout<<n3<<" is Odd?: "<< num2.isOdd()<<endl;
    cout<<n3<<" is Prime?: "<< num2.isPrime()<<endl;

    cout<<"Is Object 1 Equals to Object 2?: " << num.equals(n2)<<endl;
    cout<<"Is Object 1 Equals to Object itself?: " << num.equals(n1)<<endl;

    cout<<"Integer "<< Strnum << " to int : "<<num2.parseInt(Strnum)<<endl;

    return 0;
}
