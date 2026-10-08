//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
using namespace std;

int par(int *a, int n) {
    int min=99999999;
    bool ima=false;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (a[i]==a[j]) {
                count++;
            }
        }
        if (count%2==0) {
            if (min > a[i]) {
                min = a[i];
                ima=true;
            }
        }
    }
    if (ima) {
        return min;
    } else return 0;

}

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int br = par(a, n);
    if (br > 0) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << br;
    } else cout << "Nitu eden element ne se pojavuva paren broj pati!";

    return 0;
}
