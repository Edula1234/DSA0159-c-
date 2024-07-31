#include <iostream>
#include <iomanip>
using namespace std;
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; ++i) {
        cout << setw(rows - i);
        int value = 1; 
        for (int j = 0; j <= i; ++j) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
}
int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    printPascalsTriangle(rows);
    return 0;
}
