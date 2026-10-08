//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

int sumDigits (int n) {
    if (n==0) return 0;
    return n%10 + sumDigits(n/10);
}


int main () {
    int n;
    // cin >>n;

    cout << sumDigits(126);
    return 0;
}



