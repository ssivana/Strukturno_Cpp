//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int rows, cols, m[100][100];

    cin >> rows >> cols;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        int max = m[i][0];
        for (int j = 0; j < cols; ++j) {
            if (m[i][j] > max) {
                max = m[i][j];
            }
        }
        m[i][cols - 1] = max;
    }

    double sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += m[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    double avg = sum / (rows * cols);
    cout << avg;
    return 0;
}
