#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, rate, gross, tax, net;
    const double TAX_RATE = 0.25;

    cout << "Enter the number of hours worked: ";
    cin >> hours;

    cout << "Enter the per hour pay rate: ";
    cin >> rate;

    gross = hours * rate;
    tax = gross * TAX_RATE;
    net = gross - tax;

    cout << fixed << setprecision(2);
    cout << "\nPayroll Calculation:" << endl;
    cout << "Hours worked: " << hours << endl;
    cout << "Hourly pay rate: $" << rate << endl;
    cout << "Gross pay: $" << gross << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net pay: $" << net << endl;

    return 0;
}