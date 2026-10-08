//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

int min(int *a, int n) {
    if (n == 1) return a[0];

    int m = min(a + 1, n - 1);

    if (a[0] < m) return a[0];

    return m;
}


int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << min(a, n);
}
