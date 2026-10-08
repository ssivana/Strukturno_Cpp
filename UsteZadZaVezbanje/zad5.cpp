//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome(char *a) {
    bool is = true;
    int n = strlen(a);
    int tmp = n - 1;
    for (int i = 0; i < n / 2; i++) {
        char napred = tolower(a[i]);
        char nazad = tolower(a[tmp]);
        if (napred != nazad) {
            is = false;
        }
        tmp--;
    }
    return is;
}

int main() {
    int n, max = -1;
    bool is = false;
    char a[80], best[80];
    cin >> n;
    cin.ignore();
    while (n > 0) {
        cin.getline(a, 80);
        if (isPalindrome(a)) {
            int len = strlen(a);
            if (max < len) {
                max = len;
                strncpy(best, a, len + 1);
                best[len + 1] = '\0';
                is = true;
            }
            if (max <= len) {
                int compare = strcmp(a, best);
                if (compare < 0) {
                    max = len;
                    strncpy(best, a, len + 1);
                    best[len + 1] = '\0';
                    is = true;
                }
            }
        }

        n--;
    }

    if (is) {
        cout << best;
    } else {
        cout << "NEMA";
    }
    return 0;
}
