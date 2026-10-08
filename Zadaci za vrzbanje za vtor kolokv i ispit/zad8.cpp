//
// Created by Ivana Stojkoska on 9.6.2026.
//
#include <iostream>
using namespace std;

double f(int *arr, int n) {
    if (n == 1) return arr[0];
    return *arr + ( 1.0 / (f(arr+1, n - 1)));
}

int main() {
    int n, a[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << f(a, n);

    return 0;
}
