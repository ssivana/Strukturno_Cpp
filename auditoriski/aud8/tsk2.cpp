//
// Created by Ivana Stojkoska on 7.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int a[100], n, even = 0, odd = 0, countOdd=0, countEven=0;
    float odnos;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even += a[i];
            countEven ++;
        }
        if (a[i] % 2 == 1) {
            odd += a[i];
            countOdd++;
        }
    }
    odnos = (float)countEven/countOdd;

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Rel: " << odnos << endl;

    return 0;
}
