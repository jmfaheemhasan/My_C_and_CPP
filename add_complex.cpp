#include <iostream>
using namespace std;

int main() {
    float real1, imag1, real2, imag2;
    float sumReal, sumImag;

    
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> real1 >> imag1;

    
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> real2 >> imag2;

  
    sumReal = real1 + real2;
    sumImag = imag1 + imag2;

    cout << "Sum = " << sumReal << " + " << sumImag << "i" << endl;

    return 0;
}
