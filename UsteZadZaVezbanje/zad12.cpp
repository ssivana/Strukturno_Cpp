//
// Created by Ivana Stojkoska on 12.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

int len(char *a) {
    if (*a == '\0') return 0;
    return 1 + len(a + 1);
}

int main() {
    int n, x1, x2, y1, y2;
    cin >> n;
    char m[100][100], word[11];
    //
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> m[i][j];
        }
    }
    // cin.ignore();
    cin.getline(word,11);
    cout << len(word);
    bool found = false;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; word[j] != '\0'; j++) {
            // if (m[i][j]!=word[j]) {
            //
            // }
            if (m[i][j] == word[j]) {
                count++;
                found = true;
            }
            if (count == len(word)) {
                x1 = i;
                y1 = j - count;
                x2 = i;
                y2 = j;
            }
            count = 0;
            break;
        }
    }

    cout << x1 << ", " << y1 << " -> " << x2 << ", " << y2;
    return 0;
}
