//
// Created by Ivana Stojkoska on 13.5.2026.
//

#include <iostream>
#include <cctype>
using namespace std;

int count(char str[], char character) {
    int c=0;
    for (int i=0; str[i]!='\0'; i++) {
        if (tolower(str[i])==tolower(character)) {
            c++;
        }
    }
    return c;
}

int main() {
    char str[100], character;
    cin.getline(str, 100);
    cin >> character;

    cout << "The character " << character << " in " << str << " is appearing " << count (str,character) << " times.";

    return 0;
}