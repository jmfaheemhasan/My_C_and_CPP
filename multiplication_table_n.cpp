#include <iostream>
using namespace std;

int main() {
    int num, N;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the limit (N): ";
    cin >> N;

    cout << "Multiplication Table of " << num << " up to " << N << ":" << endl;

    for (int i = 1; i <= N; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
