#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    int num = 1;

    
    int total = n * (n + 1) / 2;

    for (int i = n; i >= 1; i--) {
        int start = total - i + 1; 
        for (int j = 1; j <= i; j++) {
            cout << start << " ";
            start++;
        }
        total -= i; 
        cout << endl;
    }

    return 0;
}
