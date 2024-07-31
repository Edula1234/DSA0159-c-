#include <iostream>
using namespace std;
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
bool isNeon(int number) {
    int square = number * number;
    int digitSum = sumOfDigits(square);
    return digitSum == number;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isNeon(number)) {
        cout << number << " is a Neon number." << endl;
    } else {
        cout << number << " is not a Neon number." << endl;
    }
    return 0;
}
