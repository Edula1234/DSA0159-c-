#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum += i;
            }
        }
        if (sum == number) {
            cout << number << " is a perfect number." << endl;
        } else {
            cout << number << " is not a perfect number." << endl;
        }
    }
    return 0;
}
