//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x >= 0 && y >= 0) {
        cout << "The coordinate is in the 1 quadrant";
    } else if (x <= 0 && y >= 0) {
        cout << "The coordinate is in the 2 quadrant";
    }
    if (x <= 0 && y <= 0) {
        cout << "The coordinate is in the 3 quadrant";
    }
    if (x >= 0 && y <= 0) {
        cout << "The coordinate is in the 4 quadrant";
    }

    return 0;
}
