#include <iostream>
using namespace std;

int main() {
    int num, originalNum, digit, sum;

    cout << "Armstrong Numbers between 1 and 1000 are: " << endl;

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        sum = 0;

        while (originalNum != 0) {
            digit = originalNum % 10;         
            sum += digit * digit * digit;    
            originalNum /= 10;                
        }

        if (sum == num) {
            cout << num << " ";               
        }
    }

    cout << endl;
    return 0;
}
