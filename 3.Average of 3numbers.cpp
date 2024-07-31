#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3;
    double average;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average << endl;

    return 0;
}
