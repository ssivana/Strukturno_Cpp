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
    cin >> k; // kolku mesta vo desno

    for (int i = 0; i < k; i++) {
        int posleden = a[n - 1];
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }
        a[0] = posleden;
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}
