//
// Created by Ivana Stojkoska on 14.5.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

void transform(char *a) {
    int frontSpace = 0, backSpace = 0;
    int n = strlen(a);
    for (int i = 0; isspace(a[i]); ++i) {
        frontSpace++;
    }
    for (int i = n; isspace(a[i]); --i) {
        backSpace++;
    }

    char niza[100];
    int ak = n - backSpace - frontSpace;
    strncpy(niza, a + frontSpace, ak);
    niza[ak] = '\0';
    strcpy(a, niza);
}

int main() {
    char a[100];
    cin.getline(a, 100);
    transform(a);
    cout << a;
    return 0;
}
