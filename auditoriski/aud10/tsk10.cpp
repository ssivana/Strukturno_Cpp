//
// Created by Ivana Stojkoska on 11.5.2026.
//

#include <iostream>
using namespace std;

int sumElements (int *a,int n) {
    if (n==0) return a[n];
    return a[n] += sumElements(a,n-1);
}

int main () {
    int n, a[100];
    cin >>n;

    for (int i=0; i<n;i++) {
        cin >> a[i];
    }

    cout << sumElements(a,n-1);



    return 0;
}




