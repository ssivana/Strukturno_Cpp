//
// Created by Ivana Stojkoska on 29.5.2026.
//
#include <iostream>
using namespace std;

int cdig(int n) {
    if (n == 0)return 0;
    return 1 + cdig(n / 10);
}

int flipped(int n) {
    int fl = 0;
    int d = cdig(n);
    while (d > 0) {
        int ld = n % 10;
        fl = fl * 10 + ld;
        n /= 10;
        d--;
    }
    return fl;
}

int main() {
    int n;
    cin >> n;

    if (n < 9) {
        cout << "The number is invalid";
        return 0;
    }
    n -= 1;
    while (n > 0) {
        if (flipped(n) % cdig(n) == 0) {
            cout << n;
            return 0;
        }

        n--;
    }

    cout << "The number is invalid";
    return 0;
}
