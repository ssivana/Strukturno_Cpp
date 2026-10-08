//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <iostream>
using namespace std;

int linearSearch(int *a, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}


int binarySearch (int *a, int n, int key) {
    int start=0;
    int end =n;
    while (start<end) {
        int mid = (start + end) /2;
        if (a[mid]==key) {
            return mid;
        } else if (a[mid] > key) {
            end = mid;
        }else if (key > a[mid]) {
            start = mid+1;
        }

    }
    return -1;

}


int main() {

    int a[100];

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    // cout << linearSearch(a,n,key);
    cout << binarySearch(a,n,key);
    return 0;
}
