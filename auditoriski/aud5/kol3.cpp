//
// Created by Ivana Stojkoska on 1.5.2026.
//
#include <iostream>
using namespace std;


bool isItMiddle (int num) {
    if (num < 10) {
        return false;
    }
    int temp = num;
    while (temp > 9) {
        int ld = temp % 10;
        temp/=10;
        if (ld >= temp % 10) {
            return false;
        }
    }

    return true;
}


int main() {
    int n, num, min=1000000000;
    cin >> n;
    bool found = false;
    for (int i = 0; i < n; i++) {
        cin >> num;

        if (isItMiddle(num)==true) {
            cout << num << endl;
            found = true;
            if (min > num ) {
                min = num;
            }
        }
    }

    if (!found) {
        cout << -1 << endl;
    } else {
        cout << min << endl;
    }
    return 0;
}
