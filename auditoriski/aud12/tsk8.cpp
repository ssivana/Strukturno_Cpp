//
// Created by Ivana Stojkoska on 14.5.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

void transform(char *a) {
    int n = strlen(a);
    char niza[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isalpha(a[i])) {
            if (islower(a[i])) {
                niza[count++] = toupper(a[i]);
            } else {
                niza[count++] = tolower(a[i]);
            }
        }
    }
    niza[count]='\0';
    strncpy(a,niza,count);
    a[count]='\0';
}

int main() {
    char a[100];
    cin.getline(a,100);

    transform(a);
    cout << a;

    return 0;
}
