//
// Created by Ivana Stojkoska on 9.6.2026.
//

#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char z1, z2, a[80], sub[80];
    cin >> z1 >> z2;
    cin.ignore();
    int start, end;

    while (cin.getline(a, 80)) {
        if (a[0] == '#') break;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] == z1) {
                start = i;
            }
            if (a[i] == z2) {
                end = i;
            }
        }
        int ind = 0;
        for (int i = start + 1; i < end; i++) {
            sub[ind] = a[i];
            ind++;
        }
        sub[ind] = '\0';

        cout << sub << endl;
    }


    return 0;
}
