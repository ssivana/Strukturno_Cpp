//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

int count(int n) {
    if (n == 0) return 0;
    if ((n / 10) % 10 == 8 && n % 10 == 8) {
        return 2 + count(n / 10);
    }
    if (n % 10 == 8) {
        return 1 + count(n / 10);
    }

    return count(n / 10);
}

int main() {
    cout << count(8) << endl;
    cout << count(818) << endl;
    cout << count(8818) << endl;

    return 0;
}
