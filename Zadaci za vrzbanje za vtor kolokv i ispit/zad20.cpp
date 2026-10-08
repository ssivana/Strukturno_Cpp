//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

void transform(char *a, int x, int i) {
    if (a[i] == '\0') return;
    if (a[i] >= 'a' && a[i] <= 'z') {
        a[i] = (a[i] - 'a' + x) % 26 + 'a';
    }
    if (a[i] >= 'A' && a[i] <= 'Z') {
        a[i] = (a[i] - 'A' + x) % 26 + 'A';
    }

    transform(a, x, i + 1);
}

int main() {
    int n, x;
    char a[80];

    cin >> n >> x;
    cin.ignore();
    while (n > 0) {

        cin.getline(a, 80);
        transform(a, x, 0);
        cout << a << endl;
        --n;
    }

    return 0;
}
