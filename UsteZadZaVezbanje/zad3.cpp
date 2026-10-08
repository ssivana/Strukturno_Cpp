//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int val(int i, int j) {
    int n, tmp = j, digits = 0, mult = 1;
    if (j == 0) {
        n = i * 10;
    } else {
        while (tmp > 0) {
            tmp /= 10;
            digits++;
        }
        while (digits > 0) {
            mult = mult * 10;
            digits--;
        }
        n = i * mult + j;
    }
    return n;
}

int main() {
    int m[120][120], rows, cols;
    int indeksni = 0;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> m[i][j];
        }
    }
    for (int j = 0; j < cols; j++) {
        indeksni = 0;
        for (int i = 0; i < rows; i++) {
            if (m[i][j] == val(i, j)) {
                indeksni++;
            }
        }
        cout << indeksni << endl;
    }

    return 0;
}
