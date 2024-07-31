#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    if (rows <= 0 || cols <= 0) {
        cout << "Number of rows and columns must be positive." << endl;
        return 1;
    }
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Array elements are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
