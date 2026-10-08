//
// Created by Ivana Stojkoska on 30.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int from, to, digit = 0 , reversed = 0;
    cin >> from >> to;

    for (int i = from; i <=to; i++) {
        int temp = i;
        while (temp > 0) {
            digit = temp % 10;
            temp /= 10;
            reversed = reversed * 10 + digit;

        }
        if (i == reversed) {
            cout << i << "\t";
        }
        reversed = 0;
    }


    return 0;
}
