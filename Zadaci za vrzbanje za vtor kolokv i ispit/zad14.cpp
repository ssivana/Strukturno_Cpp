//
// Created by Ivana Stojkoska on 10.6.2026.
//
#include <iostream>
using namespace std;


int mSd(int n) {
    while (n > 9) {
        n = n / 10;
    }
    return n;
}

int main() {
    int qty, n;


    while (cin >> qty) {
        int max = -1;
        if (qty == 0) break;
        int number;
        for (int i = 0; i < qty; i++) {
            cin >> n;
            int mostsig = mSd(n);
            if (max < mostsig) {
                max = mostsig;
                number = n;
            }
        }
        cout << number << endl;
    }


    return 0;
}
