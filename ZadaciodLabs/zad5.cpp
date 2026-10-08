//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int rows, cols, m[100][100];
    cin >> rows;
    cols = rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] < 0) {
                if (i == 0 && j == 0) {
                    m[i][j] = m[i][j + 1] + m[i + 1][j];
                    // break;
                }
                if (i == 0 && j == rows - 1) {
                    m[i][j] = m[i][j - 1] + m[i + 1][j];
                    // break;
                }
                if (i == 0) {
                    m[i][j] = m[i][j - 1] + m[i][j + 1] + m[i + 1][j];
                    // break;
                }
                if (i > 0) {
                    m[i][j] = m[i][j - 1] + m[i][j + 1] + m[i + 1][j] + m[i - 1][j];
                }
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
