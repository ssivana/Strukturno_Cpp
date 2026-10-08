//
// Created by Ivana Stojkoska on 12.6.2026.
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
        int count = 0;
        for (int j = 0; j < cols; ++j) {
            if ((i + j) % 2 == 0 && m[i][j] % 2 == 0) {
                count++;
            }
            if ((i + j) % 2 != 0 && m[i][j] % 2 != 0) {
                count++;
            }
        }
        cout << i << ": " << count << endl;
    }


    return 0;
}
