//
// Created by Ivana Stojkoska on 13.6.2026.
//
#include <cctype>
#include <iostream>
using namespace std;

void transform(char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = toupper(text[i]);
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            text[i] = text[i];
        } else {
            text[i] = tolower(text[i]);
        }
    }
    cout << text;
}

int main() {
    char a[100];
    cin.getline(a, 100);

    transform(a);
    return 0;
}
