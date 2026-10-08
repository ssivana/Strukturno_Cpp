//
// Created by Ivana Stojkoska on 11.5.2026.
//
#include <iostream>
using namespace std;

int max (int *a,int n) {
    if (n==1) return a[0];

    int maxx = max(a,n-1);

    if (a[n-1] > maxx) {
        return a[n-1];
    }else return maxx;
}

int main () {
    int n, a[100];
    cin >>n;

    for (int i=0; i<n;i++) {
        cin >> a[i];
    }

    cout << max (a,n);

    return 0;
}



