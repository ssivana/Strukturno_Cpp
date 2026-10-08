//
// Created by Ivana Stojkoska on 15.6.2026.
//
#include <iostream>
using namespace std;

int count_digits(int n) {
    if (n == 0) return 0;
    return 1 + count_digits(n / 10);
}

int power(int n) {
    if (n == 0) return 1;
    return 10 * power(n - 1);
}

int main() {
    // cout << count_digits(56283);

    // cout << power(2);

    int n = 235;
    n = n % power(count_digits(n) - 1);
    cout << n;

    return 0;
}
