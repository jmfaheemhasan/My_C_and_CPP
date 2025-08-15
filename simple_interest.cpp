#include <iostream>
using namespace std;

int main() {
    float P, R, T, SI;

    cout << "Enter Principal (P): ";
    cin >> P;

    cout << "Enter Rate (%) (R): ";
    cin >> R;

    cout << "Enter Time (in years) (T): ";
    cin >> T;

    // Calculate Simple Interest
    SI = (P * R * T) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}
