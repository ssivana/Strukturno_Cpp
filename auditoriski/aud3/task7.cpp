//
// Created by Ivana Stojkoska on 29.4.2026.
//

#include <iostream>
using namespace std;

int main() {
    float dogAge, hAge;
    cin >> dogAge;
    if (dogAge < 0) {
        cout << "The age must be a non-negative number";
        return 0;
    }

    if (dogAge <= 2) {
        hAge = dogAge * 10.5;
    } else {
        hAge = 2 * 10.5 + (dogAge - 2) * 4;
    }

    cout << "The human age of the dog would be " << hAge;


    return 0;
}
