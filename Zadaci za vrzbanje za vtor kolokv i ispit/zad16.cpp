//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int max(int n) {
    if (n == 0) return 0;
    if (n % 10 > max(n / 10)) {
        return n % 10;
    }
    return max(n / 10);
}

int main() {
    int n;

    while (cin >> n) {
        cout << max(n) << endl;
    }

    return 0;
}
