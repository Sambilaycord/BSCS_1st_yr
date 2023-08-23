#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double investment_amount, annual_interest, monthly_interest, total_value;
    int numberOfYears;
    cout << "Enter investment amount: ";
    cin >> investment_amount;
    cout << "Enter annual interest rate in percentage: ";
    cin >> annual_interest;
    cout << "Enter number of years: ";
    cin >> numberOfYears;

    monthly_interest = annual_interest / 1200;
    total_value = investment_amount * pow(1 + monthly_interest, numberOfYears * 12);
    
    cout << "Accumulated value is : " << total_value;
    
}