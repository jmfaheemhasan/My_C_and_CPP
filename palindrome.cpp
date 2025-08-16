#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;

    while (num != 0) {
        digit = num % 10;                 
        reversed = reversed * 10 + digit; 
        num /= 10;                        
    }

    if (reversed == originalNum) {
        cout << originalNum << " is a Palindrome Number." << endl;
    } else {
        cout << originalNum << " is not a Palindrome Number." << endl;
    }

    return 0;
}
