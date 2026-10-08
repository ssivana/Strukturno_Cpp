//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int yr;
    cin >> yr;

    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) {
        cout << "The year " << yr << " is a leap year.";
    } else cout << "The year " << yr << " is not a leap year.";

    return 0;
}
