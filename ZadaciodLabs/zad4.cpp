//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int n, m[100][100];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
    int finalsum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            finalsum += m[i][j];
        }
        break;
    }

    bool is = true;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += m[i][j];
        }
        if (sum != finalsum) {
            is = false;
            break;
        }
    }
    if (!is) {
        cout << "False";
        return 0;
    } else if (is) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += m[i][j];
            }
            if (sum != finalsum) {
                is = false;
                break;
            }
        }

        if (!is) {
            cout << "False";
            return 0;
        } else {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i == j) {
                        m[i][j] = finalsum;
                    }
                    if (i + j == n - 1) {
                        m[i][j] = finalsum;
                    }
                }
            }
            cout << "True" << endl;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << m[i][j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
