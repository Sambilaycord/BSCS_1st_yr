#include <iostream>

using namespace std;

int main(){
    double rent = 1000, rate = 0.03, total_rent = 0;
    
    for(int i = 0; i < 5; i++){
        rent = rent + (rent * rate);
    }

    cout << "Rent in five years: $" << rent << endl;

    for(int i = 0; i < 12; i++){
        rent = rent + (rent * rate);
        total_rent += rent;
    }
    cout << "Total rent for one year starting five years from now: $" << total_rent << endl;

    return 0;
}