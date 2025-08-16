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

    cout << "Reverse of " << originalNum << " is " << reversed << endl;

    return 0;
}
