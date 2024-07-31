#include <iostream>
#include <unordered_set>
using namespace std;
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
bool isHappy(int number) {
    unordered_set<int> seen;
    while (number != 1 && seen.find(number) == seen.end()) {
        seen.insert(number);
        number = sumOfSquares(number);
    }
    return number == 1;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isHappy(number)) {
        cout << number << " is a happy number." << endl;
    } else {
        cout << number << " is not a happy number." << endl;
    }
    return 0;
}
