//
// Created by Ivana Stojkoska on 9.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, counter[10] = {0};

    while (cin >> n) {
        counter[n]++;
    }

    for ( int i =0; i<10 ;i++) {
        cout << i << " -> " << counter [i] << endl;
    }

    return 0;
}
