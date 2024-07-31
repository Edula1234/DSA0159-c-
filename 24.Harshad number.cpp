#include <iostream>

using namespace std;

int main() {
    int number, sum = 0, originalNumber;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Calculate the sum of the digits
    while (originalNumber != 0) {
        sum += originalNumber % 10;
        originalNumber /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    if (sum != 0 && number % sum == 0) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }

    return 0;
}
