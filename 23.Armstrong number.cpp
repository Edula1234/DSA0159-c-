#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, originalNumber, remainder, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++digits;
    }
    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        sum += pow(remainder, digits);
        originalNumber /= 10;
    }
    if (sum == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
