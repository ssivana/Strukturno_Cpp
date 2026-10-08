//
// Created by Ivana Stojkoska on 2.5.2026.
//
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;

    for (int i = n + 1;; i++) {
        if (isPrime(i)) {
            cout << i << " - " << n << " = " << i - n;
            break;
        }

    }

    return 0;
}
