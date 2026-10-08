//
// Created by Ivana Stojkoska on 28.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    char znak;
    int sum = 0, num = 0;

    while (cin >> noskipws >> znak) {
        if (znak == '!') break;
        if (znak <= 57 && znak >= 48) {
            num = num * 10 + (znak - '0');
        } else {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    cout << sum;

    return 0;
}
