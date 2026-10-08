//
// Created by Ivana Stojkoska on 24.5.2026.
//
#include <iostream>
using namespace std;


bool isDifferent(int n, int x) {
    bool is = true;
    int temp = n;
    while (x > 0) {
        int ldn, ldx;
        ldx = x % 10;
        while (n > 0) {
            ldn = n % 10;
            if (ldn == ldx) {
                is = false;
            }
            n /= 10;
        }
        n = temp;
        x /= 10;
    }
    return is;
}

int main() {
    int n, x;
    cin >> n >> x;

    for (int i = n - 1; i >= 0; --i) {
        if (isDifferent(i, x)) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
