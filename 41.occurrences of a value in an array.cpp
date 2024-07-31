#include <iostream>
using namespace std;
int countOccurrences(int arr[], int size, int value) {
    int count = 0; 
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }
    return count;
}
int main() {
    int size, value;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value to count occurrences of: ";
    cin >> value;
    int occurrences = countOccurrences(arr, size, value);
    cout << "Number of occurrences of " << value << " is: " << occurrences << endl;
    return 0;
}
