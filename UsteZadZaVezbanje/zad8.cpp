//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome(char *a) {
    bool neEpalindrom = false;
    int len = strlen(a);
    int tmp = len - 1;
    for (int i = 0; i < len / 2; i++) {
        char napred = tolower(a[i]);
        char nazad = tolower(a[tmp]);
        if (napred == nazad) {
            neEpalindrom = true;
        }
        tmp--;
    }
    return neEpalindrom;
}


int main() {
    int n, min = 90;
    cin >> n;
    cin.ignore();
    char a[80], shortest[80];
    bool ima = false;
    while (n > 0) {
        cin.getline(a, 80);
        if (!isPalindrome(a)) {
            int len = strlen(a);
            if (min > len) {
                ima = true;
                min = len;
                strncpy(shortest, a, strlen(a) + 1);
            }
            if (min >= len) {
                if (strcmp(a, shortest) > 0) {
                    ima = true;
                    min = len;
                    strncpy(shortest, a, strlen(a) + 1);
                }
            }
        }

        n--;
    }

    if (ima) {
        cout << shortest;
    } else cout << "NEMA";

    return 0;
}
