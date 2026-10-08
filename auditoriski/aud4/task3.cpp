//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    float x, y = 1;
    int n;

    cin >> x >> n;
    if (n < 0) {
        cout << "The exponent is a negative number";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        y *= x;
    }

    cout << x << " ^ " << n << " = " << y;

    return 0;
}
