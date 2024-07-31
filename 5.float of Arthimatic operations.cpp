#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = 0;
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }
    cout << "Addition: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;

    if (num2 != 0) {
        cout << "Division: " << num1 << " / " << num2 << " = " << quotient << endl;
    }
    return 0;
}
