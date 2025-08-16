#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms (N): ";
    cin >> n;

    long long a = 0, b = 1, sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {   
            sum += a;
        }

        long long next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of Fibonacci numbers at even indexes up to " << n 
         << " terms = " << sum << endl;

    return 0;
}
