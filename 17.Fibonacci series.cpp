#include <iostream>
using namespace std;
int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;
    if (terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        unsigned long long first = 0, second = 1;
        cout << "Fibonacci series up to " << terms << " terms:" << endl;
        for (int i = 1; i <= terms; ++i) {
            cout << first << " ";
            unsigned long long next = first + second;
            first = second;
            second = next;
        }
        cout << endl;
    }
    return 0;
}
