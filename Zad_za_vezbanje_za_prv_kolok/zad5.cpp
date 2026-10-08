//
// Created by Ivana Stojkoska on 23.5.2026.
//
#include <iostream>
using namespace std;


int main() {
    char znak;
    int sum = 0, currnum = 0;

    while (cin >> noskipws >> znak) {
        if (znak == '!') break;
        if (isdigit(znak)) {
            currnum = currnum * 10 + (znak - '0');
        } else {
            sum += currnum;
            currnum = 0;
        }
    }
    sum += currnum;
    cout << sum;

    return 0;
}
