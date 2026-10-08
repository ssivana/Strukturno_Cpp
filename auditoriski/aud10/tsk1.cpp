//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

int factoriel(int n) {
    if (n==1) return 1;
    return n * factoriel(n-1);
}

int sumK(int n) {
    if (n==1) return 1;
    return n + sumK(n-1);
}


int main () {
    int n;
    cin >>n;
    long long sum=0;

    for (int i = 1; i <n; ++i) {
        sum+=factoriel(sumK(i));
    }

    cout << sum ;

    return 0;
}

