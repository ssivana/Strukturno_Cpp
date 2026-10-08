//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <iostream>
using namespace std;

void swaP(int *a, int *b) {
    int temp =*a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Stari: a = "<<a << ", b = " <<b << endl;
    swaP(&a,&b);
    cout << "Novi: a = "<<a << ", b = " <<b << endl;


    return 0;
}
