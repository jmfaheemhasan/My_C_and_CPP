#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: ";

    for (int num = 2; num <= N; num++) {
        bool isPrime = true; 

        for (int i = 2; i * i <= num; i++) { 
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
