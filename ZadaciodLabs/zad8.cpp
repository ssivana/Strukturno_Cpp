//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

int binarySearch(int *a, int key, int start, int end) {
    int middle = (start + end) / 2;

    if (a[middle] == key) {
        return middle;
    }
    if (start >= end) {
        return -1;
    }
    if (key > a[middle]) {
        return binarySearch(a, key, middle + 1, end);
    }
    if (key < a[middle]) {
        return binarySearch(a, key, start, middle);
    }
}

int main() {
    int n, k;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> k;

    cout << binarySearch(a, k, 0, n);

    return 0;
}
