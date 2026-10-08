//
// Created by Ivana Stojkoska on 24.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        if (n < 10) continue;

        int temp = n;
        bool is = true;

        int ld = temp % 10;
        int sld = (temp / 10) % 10;

        if (ld == sld) {
            is = false;
        } else {
            bool greater = (ld > sld);
            while (temp >= 10) {
                if (greater) {
                    if (ld <= sld) {
                        is = false;
                        break;
                    }
                } else {
                    if (ld >= sld) {
                        is = false;
                        break;
                    }
                }

                temp /= 10;
                if (temp < 10) break;
                ld = temp % 10;
                sld = (temp / 10) % 10;

                greater = !greater;
            }
        }
        if (is) {
            cout << n << endl;
        }
    }
    return 0;
}