#include <iostream>
using namespace std;
void deleteElement(int arr[], int &size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int position;
    cout << "Enter the position of the element to delete (0-based index): ";
    cin >> position;
    deleteElement(arr, size, position);
    cout << "Array after deletion: ";
    printArray(arr, size);
    return 0;
}
