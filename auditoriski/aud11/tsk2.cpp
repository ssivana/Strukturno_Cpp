//
// Created by Ivana Stojkoska on 13.5.2026.
//

#include <iostream>
using namespace std;

void find (int a[],int n,int *max, int*min) {
    *max = a[0];
    *min = a[0];

    for (int i = 1; i < n; ++i) {
        if (*max < a[i]) {
           * max = a[i];
        }
        if (*min > a[i]) {
            *min = a[i];
        }
    }

    // cout << "Max: " << max << " Min: " << min << endl;
}


int main () {
    int n, a[100];
    int max=0, min=0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    find(a,n,&max,&min);

    cout << "Max: " << max << " Min: " << min << endl;



    return 0;
}




