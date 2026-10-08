//
// Created by Ivana Stojkoska on 7.5.2026.
//
#include <iostream>
using namespace std;

// Да се напише програма за ротирање на елементите на една низа за едно место во десно.
// На крај, да се испечати на екран ротираната низа. Елементите од низата се читаат од стандарден влез.

int main() {
    int n, a[100], temp;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    temp = a[n-1];
    for (int i = 1; i < n; ++i) {
        a[n-i] = a[n-i-1];
    }
    a[0]=temp;

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " " ;
    }


    return 0;
}
