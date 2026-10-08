//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;


void red(int n) {
    if (n == 0) return;
    // cout << n <<" ";
    red(n - 1);
    cout << n << " ";
}

void pomal(int n) {
    if (n == 0) return;
    red(n);
    cout << endl;
    pomal(n - 1);
}


int main() {
    int n;
    cin >> n;

    pomal(n);


    return 0;
}
