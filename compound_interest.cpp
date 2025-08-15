#include <iostream>
#include <cmath> // for pow()
using namespace std;

int main() {
    float P, R, T, CI;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Rate (%) (R): ";
    cin >> R;

    cout << "Enter Time (in years) (T): ";
    cin >> T;

    CI = P * pow((1 + R / 100), T) - P;

    cout << "Compound Interest = " << CI << endl;

    return 0;
}
