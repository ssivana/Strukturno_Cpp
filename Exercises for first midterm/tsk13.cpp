//
// Created by Ivana Stojkoska on 28.5.2026.
//
#include <iostream>
using namespace std;

bool isSweet(int n) {
    while (n > 0) {
        int ld = n % 10;
        if (ld % 2 != 0) {
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
    for (int i = m; i <= n; i++) {
        if (isSweet(i)) {
            is = true;
            cout << i;
            break;
        } else {
            is = false;
        }
    }

    if (!is) {
        cout << "NSN";
    }


    return 0;
}
