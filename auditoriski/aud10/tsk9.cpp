//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // подобро од a*b/gcd (помал ризик од overflow)
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int r = lcm(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        r = lcm(r, a[i]);
    }

    cout << r;

    return 0;
}
