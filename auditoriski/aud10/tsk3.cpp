//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

void count_down(int n) {
    if (n == 0) return;
    count_down(n - 1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;

    count_down(n);

    return 0;
}
