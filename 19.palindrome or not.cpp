#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int left, right;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    getline(cin, str);
    left = 0;
    right = str.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            ++left;
        }
        while (left < right && !isalnum(str[right])) {
            --right;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = false;
            break;
        }
        ++left;
        --right;
    }
    if (isPalindrome) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }
    return 0;
}
