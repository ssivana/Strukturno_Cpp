//
// Created by Ivana Stojkoska on 15.6.2026.
//
#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n == 0)return true;
    int ld = n % 10;
    if (ld % 2 == 0) {
        return isEven(n / 10);
    } else { return false; }
}


int main() {
    int n, nums, a[100];
    cin >> n;

    // cout << isEven(26);
    int tmp = n - 1;
    int N = n;
    int count = 0;
    while (n > 0) {
        cin >> nums;

        if (isEven(nums)) {
            a[tmp] = nums;
            tmp--;
            count++;
        }
        n--;
    }

    for (int i = tmp + 1; i < N; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
