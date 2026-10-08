//
// Created by Ivana Stojkoska on 28.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool yes = true;
    if (a == 0 || b == 0 || c == 0) {
        cout << "NO";
        return 0;
    }

    if (a == 90 || b == 90 || c == 90) {
        if (a + b == 90 || a + c == 90 || b + c == 90) {
            if (a + b + c == 180) {
                cout << "YES" << endl;
                cout << "RIGHT" << endl;
            } else yes = false;
        }
    }

    if (a < 90 && b < 90 && c < 90) {
        if (a + b + c == 180) {
            cout << "YES" << endl;
            cout << "ACUTE" << endl;
        } else yes = false;
    }

    if ((a > 90 && a < 180) || (b > 90 && b < 180) || (c > 90 && c < 180)) {
        if (a + b + c == 180) {
            cout << "YES" << endl;
            cout << "OBTUSE" << endl;
        } else yes = false;
    }

    if (!yes) {
        cout << "NO";
    }
    return 0;
}
