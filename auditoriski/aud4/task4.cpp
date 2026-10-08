//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int inputnum;
    int div3 = 0, r1 = 0, r2 = 0;


    for (int i = 0; i < n; i++) {
        cin >> inputnum;

        if (inputnum % 3 == 0) {
            div3++;
        } else if (inputnum % 3 == 1) {
            r1++;
        } else if (inputnum % 3 == 2) {
            r2++;
        }
    }

    cout << "Out of " << n << " numbers " << endl;
    cout << "Divisible by 3 are: " << div3 << endl;
    cout << "Have a remainder 1: " << r1 << endl;
    cout << "Have a remainder 2: " << r2 << endl;

    return 0;
}
