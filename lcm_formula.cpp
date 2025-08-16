#include <iostream>
using namespace std;

int main() {
    int a, b, tempA, tempB;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    tempA = a;
    tempB = b;

    
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    int gcd = tempA;         
    int lcm = (a * b) / gcd; // used formula GCD & lcm

    cout << "LCM of " << a << " and " << b << " = " << lcm << endl;

    return 0;
}
