#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }
    int gcd;
    do {
        int remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);
    gcd = a;
    cout << "The GCD is " << gcd << "." << endl;
    return 0;
}
