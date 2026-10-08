//
// Created by Ivana Stojkoska on 29.5.2026.
//
#include <iostream>
using namespace std;

int divSum(int n) {
    int sum = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n, maxSUm = -1, index;
    cin >> n;


    for (int i = n - 1; i > 0; i--) {
        int sum = divSum(i);
        if (maxSUm <= sum) {
            maxSUm = sum;
            index = i;
        }
    }

    cout << index;
    return 0;
}
