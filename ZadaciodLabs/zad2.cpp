//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int rows, cols, m[100][100];
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; ++j) {
            cin >> m[i][j];
        }
    }

    for (int k = 0; k < cols; k++) {
        int i = 0;
        int j = k;
        while (i < rows && j >= 0) {
            cout << m[i][j] << " ";
            i++;
            j--;
        }
        cout << endl;
    }


    return 0;
}
