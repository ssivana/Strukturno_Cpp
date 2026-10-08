//
// Created by Ivana Stojkoska on 15.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
