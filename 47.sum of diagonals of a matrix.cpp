#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;
    if (rows != cols) {
        cout << "Diagonal sums can only be calculated for square matrices." << endl;
        return 1;
    }
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][cols - 1 - i];
    }
    cout << "Sum of the primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
