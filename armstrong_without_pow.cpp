#include <iostream>
using namespace std;

int main() {
    int num, originalNum, digit, sum = 0;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        digit = originalNum % 10;          
        sum += digit * digit * digit;      
        originalNum /= 10;                 
    }

    if (sum == num) {
        cout << num << " is an Armstrong Number." << endl;
    } else {
        cout << num << " is not an Armstrong Number." << endl;
    }

    return 0;
}
