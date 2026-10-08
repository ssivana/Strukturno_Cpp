//
// Created by Ivana Stojkoska on 9.5.2026.
//

#include <iostream>
using namespace std;

// Да се напише програма која за квадратна матрица
// внесена од тастатура ќе испечати на екран дали
// таа е симетрична во однос на главната дијагонала.

int main () {
    int n, m[100][100];
    bool sym=true;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i!=j) {
                if (m[i][j]!=m[j][i]) {
                    sym = false;
                }
            }
        }
    }

    if (sym) {
        cout << "Matricata e simetricna";
    }else {
        cout << "Matricata ne e simetricna";
    }


    return 0;
}

