//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int prvi, vtori, prvj, vtorj;
    double m[100][100], b[100][100];

    cin >> rows >> cols;


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
            b[i][j] = m[i][j];
        }
    }

    cin >> prvi >> prvj;
    cin >> vtori >> vtorj;


    for (int i = prvi; i <= vtori; i++) {
        for (int j = prvj; j <= vtorj; j++) {
            double sum = 0;
            double count = 0;

            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    if (k >= 0 && k < rows && l >= 0 && l < cols) {
                        sum += m[k][l];
                        count++;
                    }
                }
            }

            b[i][j] = (sum / count);
        }
    }


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
