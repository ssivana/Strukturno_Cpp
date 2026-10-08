//
// Created by Ivana Stojkoska on 22.5.2026.
//
#include <iostream>
using namespace std;

bool isSweet(int n) {
    while (n) {
        int ld;
        ld = n % 10;
        if (ld % 2 == 0) {
        } else {
            return false;
        }
        n /= 10;
    }

    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    bool is = true;

    for (int i = m; i < n + 1; i++) {
        if (!isSweet(i)) {
            is = false;
        } else {
            cout << i;
            return 0;
        }
    }
    if (!is) {
        cout << "NE";
    }

    return 0;
}
