//
// Created by Ivana Stojkoska on 7.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n1, n2, a1[100], a2[100],dotprod,sum=0;
    cin >> n1;

    for (int i = 0; i < n1; ++i) {
        cin >> a1[i];
    }
    cin >> n2;

    for (int i = 0; i < n2; ++i) {
        cin >> a2[i];
    }

    if (n1 != n2) {
        cout << "Cant calculate dot product; The lengths of the arrays differ.";
        return 0;
    } else {
        for (int i = 0; i < n1; i++) {
            dotprod = a1[i] * a2[i];
            sum+=dotprod;
        }
    }

    cout << "The dot product of the two vectors is: " << sum ;

    return 0;
}
