//
// Created by Ivana Stojkoska on 7.5.2026.
//

#include <iostream>
using namespace std;


// Да се напише програма за ротирање на елементите на една низа за m местa во десно.
// На крај, да се испечати на екран ротираната низа. Елементите од низата и бројот на ротирања се читаат од стандарден влез.

int main() {
    int n, a[100], m, temp;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        temp = a[n - 1];
        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j-1];
        }
        a[0] =temp;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
