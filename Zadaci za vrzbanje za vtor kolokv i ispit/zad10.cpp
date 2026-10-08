//
// Created by Ivana Stojkoska on 9.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

void BubbleSort(char *a, int ind) {
    for (int i = 0; i < ind; i++) {
        for (int j = 0; j < ind - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    char a[200];
    char digits[50];

    while (cin.getline(a, 200)) {
        int n = strlen(a);
        if (a[0] == '#' && n == 1) break;
        int countdigits = 0;
        int ind = 0;
        for (int i = 0; i < n; i++) {
            if (isdigit(a[i])) {
                countdigits++;
                digits[ind] = a[i];
                ind++;
            }
        }
        // digits[ind]='\0';
        BubbleSort(digits, ind);
        cout << countdigits << ":";

        for (int i = 0; i < ind; i++) {
            cout << digits[i];
        }
        cout << endl;
    }


    return 0;
}
