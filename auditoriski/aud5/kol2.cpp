//
// Created by Ivana Stojkoska on 1.5.2026.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
        for (int j = i; j > 0; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
