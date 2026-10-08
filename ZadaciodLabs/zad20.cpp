//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;


int main() {
    int a, r, n, mult, c = 0;

    cin >> a >> r >> n;

    cout << a << ", ";
    for (int i = 0; i < n - 1; i++) {
        mult = a * r;
        a = mult;
        c++;
        if (c == n - 1) break;
        cout << mult << ", ";
    }
    cout << a;

    return 0;
}
