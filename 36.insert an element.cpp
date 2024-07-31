#include <iostream>
using namespace std;
void insertElement(int arr[], int &size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    ++size;
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
    int arr[size + 1]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element (0-based index): ";
    cin >> position;
    insertElement(arr, size, element, position);
    cout << "Array after insertion: ";
    printArray(arr, size);
    return 0;
}
