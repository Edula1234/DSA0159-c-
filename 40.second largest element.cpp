#include <iostream>
#include <climits>
using namespace std;
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return INT_MIN;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN) {
        cout << "There is no distinct second largest element." << endl;
    }
    return secondLargest;
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != INT_MIN) {
        cout << "Second largest element is: " << secondLargest << endl;
    }
    return 0;
}
