#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100];

    cout << endl << "Enter elements of first matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "Enter element at row " << i << " column " << j << ": ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl << "Enter elements of second matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "Enter element at row " << i << " column " << j << ": ";
            cin >> matrix2[i][j];
        }
    }

    cout << endl << "First Matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Second Matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    char operation;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
      case '+':
        cout << "Result: " << matrix1[100][100] + matrix2[100][100] << endl;
        break;
     case '-':
        cout << "Result: " << matrix1[100][100] - matrix2[100][100] << endl;
        break;
      case '*':
        cout << "Result: " << matrix1[100][100] * matrix2[100][100] << endl;
        break;
      case '/':
        cout << "Result: " << matrix1[100][100] / matrix2[100][100] << endl;
        break; 
      default:
        cout << "Invalid input" << endl;
    }

    return 0;
}

