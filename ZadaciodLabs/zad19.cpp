//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 100; i < 1000; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
