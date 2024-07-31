#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }
    int* arr = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
