#include <iostream>
using namespace std;
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}
double averageOfArray(int arr[], int size) {
    int sum = sumOfArray(arr, size);
    if (size == 0) return 0;
    return static_cast<double>(sum) / size;
}
int main() {
    int size;
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
    double avg = averageOfArray(arr, size);
    cout << "Average of all elements in the array: " << avg << endl;
    return 0;
}