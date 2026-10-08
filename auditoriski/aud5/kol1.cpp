//
// Created by Ivana Stojkoska on 1.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 5 == 0) {
            cout << "The remainder is 0 - '-----'  ";
        } else if (num % 5 == 1) {
            cout << "The remainder is 1 - '.----'  ";
        }else if (num % 5 == 2) {
            cout << "The remainder is 2 - '..---'  ";
        }else if (num % 5 == 3) {
            cout << "The remainder is 3 - '...--'  ";
        }else if (num % 5 == 4) {
            cout << "The remainder is 4 - '....-'  ";
        }
        cout << endl;
    }

    return 0;
}
