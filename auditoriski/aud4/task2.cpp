//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    cout << 11;
    sum+=11;
    for (int i = 13; i <= 99; i += 2) {
        cout << " + "<< i ;
        sum += i;
    }
    cout <<" = "<< sum;


    return 0;
}
