//
// Created by Ivana Stojkoska on 7.5.2026.
//
#include <iostream>
using namespace std;

// Да се напише програма која ќе провери дали дадена низа од n елементи
// која се чита од стандарден влез е строго растечка, строго опаѓачка или
// ниту строго растечка ниту строго опаѓачка. Резултатот да се испечати на екран.


int main() {
    int n, a[100];
    cin >> n;
    bool rastecka = true;
    bool opagacka = true;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            rastecka = false;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            opagacka = false;
            break;
        }
    }

    if (opagacka) {
        cout << "The array is descending";
    } else if (rastecka) {
        cout << "The array is ascending";
    } else if (!rastecka && !opagacka) {
        cout << "The array is neither ascending nor descending";
    }

    return 0;
}