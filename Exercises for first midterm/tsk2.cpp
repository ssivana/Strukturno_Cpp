//
// Created by Ivana Stojkoska on 29.5.2026.
//

#include <iostream>
using namespace std;

int firstDig(int n) {
    while (n > 9) {
        n /= 10;
    }
    return n;
}

int firstCATlast(int n) {
    int ld = n % 10;
    int firstdigit = firstDig(n);
    return firstdigit * 10 + ld;
}

int middle(int n) {
    n /= 10;
    int rev = 0, mid = 0;
    while (n > 9) {
        int ld = n % 10;
        if (ld == 0) return 0;
        rev = rev * 10 + ld;
        n /= 10;
    }

    while (rev > 0) {
        int ld = rev % 10;
        mid = mid * 10 + ld;
        rev /= 10;
    }
    return mid;
}

int mult(int n) {
    int mul = 1;
    if (n == 0) return 0;
    while (n > 0) {
        int ld = n % 10;
        mul = mul * ld;
        n /= 10;
    }
    return mul;
}

int main() {
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i < b; i++) {
        int product = mult(middle(i));
        int delitel = firstCATlast(i);
        int quo = product / delitel;
        if (product == 0 || i / 10 == 0 || i / 100 == 0) continue;
        if (product % delitel == 0) {
            cout << i << " -> (" << product << " == " << delitel << " * " << quo << ")" << endl;
            count++;
        }
    }

    cout << count;
    return 0;
}
