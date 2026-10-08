//
// Created by Ivana Stojkoska on 29.5.2026.
//
#include <iostream>
using namespace std;

int reversed(int n) {
    n /= 10;
    int rev = 0;
    while (n > 9) {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }

    return rev;
}

int sumfl(int n) {
    int ld = n % 10;
    while (n > 9) {
        n /= 10;
    }
    return ld + n;
}

int firstDig(int n) {
    while (n > 9) {
        n /= 10;
    }
    return n;
}


int main() {
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i/10 == 0 || i/100==0 || reversed(i)/sumfl(i)==0) continue;

        if (reversed(i) % sumfl(i) == 0) {
            cout << i << " -> (" << reversed(i) << " == (" << i % 10 << " + " << firstDig(i) << ") * " << reversed(i) /
                    sumfl(i) << ")" << endl;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
