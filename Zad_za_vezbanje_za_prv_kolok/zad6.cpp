//
// Created by Ivana Stojkoska on 23.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x <= 0 || y <= 0) {
        cout << "Invalid input";
        return 0;
    }
    int min, max;
    if (x > y) {
        min = y;
        max = x;
    } else {
        min = x;
        max = y;
    }


    bool even = true;

    while (min > 0 && max > 0) {
        int ldMax;
        ldMax = max / 10 % 10;
        int ldmin;
        ldmin = min % 10;

        if (ldMax != ldmin) {
            even = false;
        }
        max = max / 100;
        min = min / 10;
    }

    if (even) {
        cout << "PAREN";
    } else {
        cout << "NE";
    }

    return 0;
}
