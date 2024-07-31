#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        ++count;
    }
    return count;
}
bool isNarcissistic(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }
    return sum == originalNumber;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isNarcissistic(number)) {
        cout << number << " is a narcissistic number." << endl;
    } else {
        cout << number << " is not a narcissistic number." << endl;
    }
    return 0;
}
