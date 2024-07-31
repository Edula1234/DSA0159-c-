#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    int roundedDown = floor(number);
    int roundedUp = ceil(number);
    int nearestInteger;
    if ((number - roundedDown) < (roundedUp - number)) {
        nearestInteger = roundedDown;
    } else {
        nearestInteger = roundedUp;
    }
    cout << "Number: " << number << endl;
    cout << "Rounded down: " << roundedDown << endl;
    cout << "Rounded up: " << roundedUp << endl;
    cout << "Nearest integer: " << nearestInteger << endl;
    return 0;
}
