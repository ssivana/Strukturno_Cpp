//
// Created by Ivana Stojkoska on 9.6.2026.
//
#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int rows, cols, m[100][100];
    cin >> rows >> cols;
    int a[100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += m[i][j];
        }
        int far = m[i][0];
        double arm = (double) sum / cols;
        float maxDis = fabs(arm - m[i][0]);

        for (int j = 1; j < cols; j++) {
            float dis = fabs(arm - m[i][j]);
            if (maxDis < dis) {
                maxDis = dis;
                far = m[i][j];
            }
        }

        a[i] = far;
    }

    for (int i = 0; i < rows; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
