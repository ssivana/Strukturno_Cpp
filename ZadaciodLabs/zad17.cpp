//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    double max = a[0], el = 1;
    for (int i = 0; i < n; ++i) {
        double sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            if (sum > max) {
                max = sum;
                el = j - i + 1;
            }
        }
    }

    cout << "Maximum Sum: " << max << endl;
    cout << "Percentage of Elements Used: " << (el * 100 / n);

    return 0;
}
