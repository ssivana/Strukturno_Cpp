//
// Created by Ivana Stojkoska on 30.4.2026.
//
#include <iostream>
using namespace std;

int main () {
    int n;
    int max = -999999999;
    while (cin>>n) {
        if (n > max) {
            max = n;
        }
    }
    cout << max;


    return 0;
}