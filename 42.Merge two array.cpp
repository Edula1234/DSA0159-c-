#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}
int main() {
    int size1, size2;
    cout << "Enter the number of elements in the first array: ";
    cin >> size1;
    if (size1 <= 0) {
        cout << "Array size must be positive." << endl;
        return 1; 
    }
    int arr1[size1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> size2;
    if (size2 <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }
    int arr2[size2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }
    int merged[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, merged);
    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}
