//
// Created by Ivana Stojkoska on 9.5.2026.
//
#include <iostream>
using namespace std;

// Да се напише програма која за матрица внесена од
// тастатура ќе ги замени елементите од главната дијагонала
// со разликата од максималниот и минималниот елемент во матрицата.
// Резултантната матрица да се испечати на екран.
int main() {
    int n, m[100][100], max, min, res;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    max = m[0][0];
    min = m[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (max < m[i][j]) {
                max = m[i][j];
            }
            if (min > m[i][j]) {
                min = m[i][j];
            }
        }
    }
    res = max - min;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                m[i][j] = res;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Result: " << res << endl;


    return 0;
}
