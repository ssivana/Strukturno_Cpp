//
// Created by Ivana Stojkoska on 22.5.2026.
//
#include <iostream>
using namespace std;

int digitCount(int n) {
    if (!n) return 0;
    return 1 + digitCount(n / 10);
}


int ReversedNumber(int n) {
    int ld, rev = 0;
    while (n > 0) {
        ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }
    return rev;
}


int main() {
    int n;
    cin >> n;
    if (n < 9) {
        cout << "Brojot ne e validen";
        return 0;
    } else {
        for (int i = n - 1; i > 0; i--) {
            if (ReversedNumber(i) % digitCount(i) == 0) {
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}
