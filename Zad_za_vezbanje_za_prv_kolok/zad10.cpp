//
// Created by Ivana Stojkoska on 24.5.2026.
//
#include <iostream>
using namespace std;


int main() {
    char hex;
    int sum = 0;
    while (cin >> hex) {
        if (hex == '.') {
            break;
        }
        if (hex == 'A' || hex == 'a') {
            sum += 10;
        } else if (hex == 'B' || hex == 'b') {
            sum += 11;
        } else if (hex == 'C' || hex == 'c') {
            sum += 12;
        } else if (hex == 'D' || hex == 'd') {
            sum += 13;
        } else if (hex == 'E' || hex == 'e') {
            sum += 14;
        } else if (hex == 'F' || hex == 'f') {
            sum += 15;
        } else {
            sum += (hex - '0');
        }
    }

    if (sum % 10 == 6 && sum / 10 % 10 == 1 && sum % 16 == 0) {
        cout << "Poln pogodok";
    } else if (sum % 16 == 0) {
        cout << "Pogodok";
    } else {
        cout << sum;
    }
    return 0;
}
