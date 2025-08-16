#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int low, high;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "Armstrong numbers between " << low << " and " << high << " are: ";

    for (int num = low; num <= high; num++) {
        int originalNum = num, sum = 0, digits = 0;

        
        int temp = num;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        
        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

    
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
