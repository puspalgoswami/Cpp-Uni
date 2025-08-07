#include <iostream>
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

    cout << endl << "Result:" << endl;

    switch (operation) {
        case '+':
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= cols; j++) {
                    cout << matrix1[i][j] + matrix2[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case '-':
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= cols; j++) {
                    cout << matrix1[i][j] - matrix2[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case '*':
            if (cols != rows) {
                cout << "Invalid dimensions!" << endl;
            } else {
                int result[100][100] = {0};
                for (int i = 1; i <= rows; i++) {
                    for (int j = 1; j <= cols; j++) {
                        result[i][j] = 0;
                        for (int k = 1; k <= cols; k++) {
                            result[i][j] += matrix1[i][k] * matrix2[k][j];
                        }
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            break;

        default:
            cout << "Invalid input!" << endl;
    }
     
    return 0;
}
