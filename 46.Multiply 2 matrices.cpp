#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. Number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return 1;
    }
    int** matrix1 = new int*[rows1];
    int** matrix2 = new int*[rows2];
    int** result = new int*[rows1];
    for (int i = 0; i < rows1; ++i) {
        matrix1[i] = new int[cols1];
        result[i] = new int[cols2];
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < rows2; ++i) {
        matrix2[i] = new int[cols2];
    }
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the matrices is:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows1; ++i) {
        delete[] matrix1[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] result;

    for (int i = 0; i < rows2; ++i) {
        delete[] matrix2[i];
    }
    delete[] matrix2;
    return 0;
}
