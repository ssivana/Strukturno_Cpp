//
// Created by Ivana Stojkoska on 11.5.2026.
//

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n, a[100];
    cin >>n;
    for (int i = 0; i < n; ++i) {
        cin >>a[i];
    }
    //
    // int n = 5, a[5] = {48, 36, 120, 72, 84};
    int r = gcd(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        r = gcd(r, a[i]);
    }

    cout << r;

    return 0;
}
