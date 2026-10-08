//
// Created by Ivana Stojkoska on 13.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

int occur(char *a, char z) {
    char letter = tolower(z);
    int count = 0;
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
        if (a[i] == letter) {
            count++;
        }
    }
    return count;
}


int main() {
    int n, k;
    char c, a[200], final[200];

    cin >> n >> k >> c;
    cin.ignore();
    int max = -1;
    bool found = false;
    while (n > 0) {
        cin.getline(a, 200);
        int len = strlen(a);

        if (k == occur(a, c)) {
            if (max < len) {
                max = len;
                found = true;
                for (int i = 0; i < max; i++) {
                    final[i] = a[i];
                }
                final[max] = '\0';
            }
        }

        n--;
    }

    if (found) {
        cout << final;
    } else cout << "NONE";
    return 0;
}
