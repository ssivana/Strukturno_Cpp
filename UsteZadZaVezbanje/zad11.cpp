//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;


void premesti(int *a, int n) {
    int b[100];
    int k = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            b[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            b[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < n; ++i) {
        a[i] = b[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    premesti(a, n);
    return 0;
}
