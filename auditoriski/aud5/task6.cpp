//
// Created by Ivana Stojkoska on 1.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0, count = 1;

    while (cin >> n) {
        if (count % 2 == 0) {
            sumEven += n;
            count++;
        } else {
            sumOdd += n;
            count++;
        }
    }

    if ((sumEven - sumOdd) < 10) {
        cout << "Dvete sumi se slicni";
    } else {
        cout << "Dvete sumi mnogu se razlikuvaat";
    }

    return 0;
}
