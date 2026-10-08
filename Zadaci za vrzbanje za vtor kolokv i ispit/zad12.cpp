//
// Created by Ivana Stojkoska on 9.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int x, rows, cols, m[100][100];

    cin >> x;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; ++j) {
            sum += m[i][j];
        }
        if (sum > x) {
            for (int j = 0; j < cols; ++j) {
                m[i][j] = 1;
            }
        }
        if (sum < x) {
            for (int j = 0; j < cols; ++j) {
                m[i][j] = -1;
            }
        }
        if (sum == x) {
            for (int j = 0; j < cols; ++j) {
                m[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
