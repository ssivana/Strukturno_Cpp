//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <iostream>
#include <cctype>

using namespace std;

int Many(char *a) {
    int letters = 0, svrznici = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (ispunct(a[i])) {
            if (letters == 1 || letters == 2 || letters == 3) {
                svrznici++;
            }
            letters = 0;
            continue;
        }
        if (isalpha(a[i])) {
            letters++;
        }
        if (isspace(a[i])) {
            if (letters == 1 || letters == 2 || letters == 3) {
                svrznici++;
            }
            letters = 0;
        }
    }
    if (letters >= 1 && letters <= 3) {
        svrznici++;
    }
    return svrznici;
}

int main() {
    char a[100], final[100];
    int max, naj = -1;

    while (cin.getline(a, 100)) {
        max = Many(a);
        int c = 0;
        if (naj < max) {
            naj = max;
            for (int i = 0; a[i] != '\0'; ++i) {
                final[i] = a[i];
                c++;
            }
            final[c] = '\0';
        }
    }

    cout << naj << ": " << final;


    return 0;
}
