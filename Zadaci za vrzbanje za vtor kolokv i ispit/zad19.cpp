//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    float a[100][100], b[100][100], x = 0, y = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                x += a[i][j];
            }
            if (i + j >= n) {
                y += a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j) && (i + j == n - 1)) {
                b[i][j] = x + y;
                continue;
            }
            if (i == j) {
                b[i][j] = x;
                continue;
            }
            if (i + j == n - 1) {
                b[i][j] = y;
                continue;
            }
            b[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
