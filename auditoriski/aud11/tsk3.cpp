//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <iostream>
using namespace std;

void swapp (int *x, int*y) {
    int tmp=*x;
    *x=*y;
    *y = tmp;
}

void BubbleSort(int *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j=0;j<n-1-i;j++) {
            if (a[j]>a[j+1]) {
                swapp(&a[j+1],&a[j]);
            }
        }
    }
}

void input(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void print(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, a[100];
    cin >> n;

    input(a, n);
    print(a, n);
    BubbleSort(a,n);
 print(a, n);
    return 0;
}
