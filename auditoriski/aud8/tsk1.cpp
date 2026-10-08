//
// Created by Ivana Stojkoska on 7.5.2026.
//
#include <iostream>
using namespace std;
#define LEN 100

int main() {
    int a1[LEN], a2[LEN], n1, n2;
    bool same = true;

    cin >> n1;

    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }
    cin >> n2;

    for (int i = 0; i < n1; i++) {
        cin >> a2[i];
    }
    if (n1 != n2) {
        same = false;
    } else {
        for (int i = 0; i < n1; i++) {
            if (a1[i] != a2[i]) {
                same = false;
            }
        }
    }

    if (same) {
        cout << "Dvete nizi se isti";
    } else {
        cout << "Dvete nizi se razlicni";
    }

    return 0;
}
