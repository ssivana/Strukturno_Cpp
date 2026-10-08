//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int n, m[100][100];
    cin >> n;
    if (n % 2 != 0) {
        cout << "GRESKA";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
    int b[n / 2][n / 2];
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int sum = 0;
            // sum = m[i][j] + m[i][n - 1 - i] + m[n - 1 - i][j] + m[n - 1 - i][n - 1 - j];
            sum = m[i][j] + m[i][n - 1 - j] + m[n - 1 - i][j] + m[n - 1 - i][n - 1 - j];
            b[i][j] = sum;
        }
    }
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
