//
// Created by Ivana Stojkoska on 10.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int rows, A[100][100], B[100][100];
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows * 2; j++) {
            cin >> A[i][j];
        }
    } ////////////////


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            B[i][j] = A[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = rows; j < rows * 2; j++) {
            B[i + rows][j - rows] = A[i][j];
        }
    }


    //////////
    for (int i = 0; i < rows * 2; i++) {
        for (int j = 0; j < rows; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
