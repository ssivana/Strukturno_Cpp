//
// Created by Ivana Stojkoska on 30.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, max1, max2, temp;

    if (cin >> max1 >> max2) {
        if (max2 > max1) {
            temp = max1;
            max1 = max2;
            max2 = temp;
        }

        while (cin >> n) {
            if (n > max1) {
                max2 = max1;
                max1 = n;
            } else if (n > max2) {
                max2 = n;
            }
        }
    }

    cout << "The Biggest Number Is: " << max1  << ",\nAnd The Second Largest Number Is: " << max2;


    return 0;
}
