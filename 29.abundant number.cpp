#include <iostream>
using namespace std;
int sumOfProperDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}
bool isAbundant(int number) {
    return sumOfProperDivisors(number) > number;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isAbundant(number)) {
        cout << number << " is an abundant number." << endl;
    } else {
        cout << number << " is not an abundant number." << endl;
    }
    return 0;
}
