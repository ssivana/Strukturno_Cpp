//
// Created by Ivana Stojkoska on 3.5.2026.
//

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main () {
    int count = 0;
    for (int i = 0; i < 1000; i ++) {
        if (isPrime(i) && isPrime(i+2)) {
            cout << i << " + " << i+2<< endl;
            ++count;
        }
    }

    cout << "Total number is: " << count;

}