#include <iostream>

using namespace std;

int main(){
    string employee;
    double hours, pay_rate, federal_tax, state_tax;
    cout << "Enter employee's name: ";
    cin >> employee;
    cout << "Enter number of hours worked in a week: ";
    cin >> hours;
    cout << "Enter hourly pay rate: ";
    cin >> pay_rate;
    cout << "Enter federal tax withholding rate: ";
    cin >> federal_tax;
    cout << "Enter state tax withholding rate: ";
    cin >> state_tax;

    double gross_pay = hours * pay_rate;

    double federal_rate = federal_tax * 100;
    double federal_dec = (gross_pay / 100) * federal_rate;

    double state_rate = state_tax * 100;
    double state_dec = (gross_pay / 100) * state_rate;

    double total_deduction = federal_dec + state_dec;

    double net_pay = gross_pay - total_deduction;

    cout << "Employee Name: " << employee << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Pay Rate: $" << pay_rate << endl;
    cout << "Gross Pay: $" << gross_pay << endl;
    cout << "Deductions:" << endl;
    cout << "   Federal Withholding (" << federal_rate << "%): $" << federal_dec << endl;
    cout << "   State Withholding (" << state_rate << "%): $" << state_dec << endl;
    cout << "   Total Deduction: $" << total_deduction << endl;
    cout << "Net Pay: $" << net_pay << endl;

}