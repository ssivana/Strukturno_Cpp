//
// Created by Ivana Stojkoska on 2.6.2026.
//
#include <iostream>
using namespace std;


int sum_pos(int *a, int ind, int n) {
    if (ind > n) return 0;
    int sum = 0;
    for (int i = ind; i < n; i++) {
        sum += a[i];
    }

    return sum;
}

int main() {
    int n, a[100], ind;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> ind;

    cout << sum_pos(a, ind, n);

    return 0;
}
