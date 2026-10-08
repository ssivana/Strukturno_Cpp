//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

void countUp(int n) {
    if (n == 0) return;
    countUp(n - 1);
    cout << n;
}

void countDown(int n) {
    if (n == 0) return;
    cout << n;
    countDown(n - 1);
}


int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        countUp(i - 1);
        cout << i;
        countDown(i - 1);
        cout << endl;
    }

    return 0;
}
