//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    char a[100];

    cin >> n;
    cin.ignore();
    cin.getline(a, 100);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'x') {
            count++;
        }
        a[i] = '0';
    }
    for (int i = 0; i < count; i++) {
        a[i] = 'x';
    }
    cout << a;

    return 0;
}
