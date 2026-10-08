//
// Created by Ivana Stojkoska on 24.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int i = 0; i <= m - 1; i++) {
        if (i == 0 || i == m - 1) {
            cout << "%";
            for (int j = 1; j < m - 1; ++j) {
                cout << "@";
            }
            cout << "%" << endl;
        } else if (i != m - 1) {
            cout << "%";
            for (int j = 1; j < m - 1; ++j) {
                cout << ".";
            }
            cout << "%" << endl;
        }
    }

    return 0;
}
