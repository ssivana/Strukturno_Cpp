//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int rows, cols, m[100][100], sumfirst = 0, sumsecond = 0, ab;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> m[i][j];
        }
    }

    if (cols % 2 != 0) {
        for (int i = 0; i < rows; ++i) {
            sumfirst = sumsecond = 0;
            for (int j = 0; j < cols / 2 + 1; j++) {
                sumfirst += m[i][j];
            }
            for (int j = cols / 2; j < cols; j++) {
                sumsecond += m[i][j];
            }
            ab = abs(sumfirst - sumsecond);
            m[i][cols / 2] = ab;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
    if (cols % 2 == 0) {
        for (int i = 0; i < rows; ++i) {
            sumfirst = sumsecond = 0;
            for (int j = 0; j < cols / 2; j++) {
                sumfirst += m[i][j];
            }
            for (int j = cols / 2; j < cols; j++) {
                sumsecond += m[i][j];
            }
            ab = abs(sumfirst - sumsecond);
            m[i][cols / 2] = ab;
            m[i][cols / 2 - 1] = ab;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
