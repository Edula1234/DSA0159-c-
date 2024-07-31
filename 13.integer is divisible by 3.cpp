#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    string result = (number % 3 == 0) ? "divisible by 3" : "not divisible by 3";
    cout << "The number is " << result << "." << endl;

    return 0;
}
