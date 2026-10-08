//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int poramnet(int a) {
    if (a == 0) return 0;
    if (a % 10 == 9) {
        return poramnet(a / 10) * 10 + 7;
    }
    return poramnet(a / 10) * 10 + a % 10;
}

void Bubble(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n, a[100];
    int counter = 0;
    while (cin >> n) {
        for (int i = counter; i < counter + 1; i++) {
            a[i] = poramnet(n);
        }
        counter++;
    }
    Bubble(a, counter);
    if (counter < 5) {
        for (int i = 0; i < counter; i++) {
            cout << a[i] << " ";
        }
        return 0;
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
