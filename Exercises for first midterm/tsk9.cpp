//
// Created by Ivana Stojkoska on 28.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int a, b, c, min, midd, max, dif1, dif2, dif3, smallest;

    while (cin >> a >> b >> c) {
        min = max = midd = a;
        if (max < b) {
            max = b;
        }
        if (max < c) {
            max = c;
        }
        if (min > b) {
            min = b;
        }
        if (min > c) {
            min = c;
        }
        if (max == a && min == b) {
            midd = c;
        }
        if (max == a && min == c) {
            midd = b;
        }
        if (max == b && min == a) {
            midd = c;
        }
        if (max == b && min == c) {
            midd = a;
        }
        if (max == c && min == a) {
            midd = b;
        }
        if (max == c && min == b) {
            midd = a;
        }

        dif1 = max - min;
        dif2 = max - midd;
        dif3 = midd - min;
        smallest = dif1;
        if (smallest > dif2) {
            smallest = dif2;
        }
        if (smallest > dif3) {
            smallest = dif3;
        }

        if (midd == max) {
            cout << midd << " " << max << endl;
            continue;
        }
        if (min == midd) {
            cout << min << " " << midd << endl;
            continue;
        }
        if (min == max) {
            cout << min << " " << max << endl;
            continue;
        }
        if ((dif1 == dif2) || (dif1 == dif3) || (dif2 == dif3)) {
            cout << min << " " << midd << " " << max << endl;
            continue;
        }
        if (smallest == dif1) {
            cout << min << " " << max << endl;
        }
        if (smallest == dif2) {
            cout << midd << " " << max << endl;
        }
        if (smallest == dif3) {
            cout << min << " " << midd << endl;
        }
    }

    return 0;
}
