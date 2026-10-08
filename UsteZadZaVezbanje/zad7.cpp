//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char m[100][100];
    int s = 'A', end = 'J';
    int count = 0;


    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (s == end) {
                    s = 'A';
                }
                m[i][j] = s;
                s++;
            }
        }
        if (i % 2 != 0) {
            for (int j = n - 1; j >= 0; j--) {
                if (s == end) {
                    s = 'A';
                }
                m[i][j] = s;
                s++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
