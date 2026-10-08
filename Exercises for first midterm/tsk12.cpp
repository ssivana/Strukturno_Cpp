//
// Created by Ivana Stojkoska on 28.5.2026.
//
#include <iostream>
using namespace std;

void newNum(int &n) {
    int tmp = n;
    int count = 0, mult = 1;
    int ld = n % 10;
    tmp /= 10;
    n /= 10;
    while (tmp > 0) {
        tmp /= 10;
        ++count;
        mult = mult * 10;
    }
    n = ld * mult + n;
}

int main() {
    int n, f, s;
    cin >> n;


    while (n > 0) {
        cin >> f >> s;
        newNum(f);
        if (f > s) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        n -= 1;
    }


    return 0;
}
