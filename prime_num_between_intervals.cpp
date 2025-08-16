#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of interval: ";
    cin >> start;
    cout << "Enter end of interval: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int num = start; num <= end; num++) {
        if (num < 2) continue;  

        int i;
        bool isPrime = true;

        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
