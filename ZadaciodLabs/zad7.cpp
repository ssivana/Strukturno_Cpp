//
// Created by Ivana Stojkoska on 14.6.2026.
//
#include <iostream>
using namespace std;

void Bubblesort(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int M, N;
    int m[100], n[100], sorted[100];

    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> m[i];
    }
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> n[i];
    }

    for (int i = 0; i < M; ++i) {
        sorted[i] = m[i];
    }
    int c = M;
    for (int i = 0; i < N; i++) {
        sorted[c] = n[i];
        c++;
    }
    Bubblesort(sorted, N + M);
    for (int i = 0; i < N + M; ++i) {
        cout << sorted[i] << " ";
    }

    return 0;
}
