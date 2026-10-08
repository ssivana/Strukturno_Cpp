//
// Created by Ivana Stojkoska on 30.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, max;
    bool found = false;


    while (cin >> n) {
        if (n > 100) {
            continue;
        }

        if (!found) {
            max = n;
            found = true;
        } else if (n > max) {
            max = n;
        }
    }

    if (found) {
        cout << max;

    }
    return 0;
}
