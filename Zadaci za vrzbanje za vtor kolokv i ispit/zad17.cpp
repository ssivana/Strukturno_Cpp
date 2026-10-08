//
// Created by Ivana Stojkoska on 11.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;


int main() {
    char a[100];
    int count = 0;
    while (cin.getline(a, 100)) {
        bool samoglaska = true;

        if (a[0] == '#' && a[1] == '\0') {
            break;
        }

        for (int i = 0; a[i] != '\0'; i++) {
            a[i] = tolower(a[i]);
            a[i + 1] = tolower(a[i + 1]);
            if ((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && (
                    a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1] == 'u')) {
                samoglaska = true;
            } else samoglaska = false;


            if (samoglaska) {
                cout << a[i] << a[i + 1] << endl;
                count++;
            }
        }
    }
    cout << count;


    return 0;
}
