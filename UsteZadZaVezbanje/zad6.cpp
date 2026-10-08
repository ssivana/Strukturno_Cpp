//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;


void print(int n) {
    if (n == 0) return;
    cout << 1;
    print(n - 1);
}

void gl(int n) {
    if (n == 0)return;
    gl(n - 1);
    print(n - 1);
    cout << n;
    print(n - 1);
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    gl(n);
    return 0;
}
