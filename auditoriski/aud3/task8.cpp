//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    //
    // if (x>y) {
    //     cout << "X = " << x << " is bigger than Y = " << y;
    // } else {
    //     cout << "Y = " << y << " is bigger than X = "  << x;
    // }


    cout << ((x > y) ? x : y);

    return 0;
}
