//
// Created by Ivana Stojkoska on 2.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int matrix[100][100], rows, cols, count = 0;
    cin >> rows >> cols;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1 && matrix[i][j + 2] == 1) {
                count++;
                break;
            }
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1 && matrix[i + 2][j] == 1) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}

