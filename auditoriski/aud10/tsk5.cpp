//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

float xnn (int n) {
    if (n==1) return 1;
    if (n==2) return 2;
    return (n - 1) * xnn(n - 1) / n + xnn(n - 2) / n;
}



int main () {
    int n;
    cin >>n;
    cout << "xnn(" << n <<") = " << xnn(n);

    return 0;
}



