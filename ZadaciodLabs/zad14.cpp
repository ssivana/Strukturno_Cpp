//
// Created by Ivana Stojkoska on 13.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

void letterFrequency(char *text, char letter) {
    double lower = 0, upper = 0;
    char Lower = tolower(letter);
    char Capital = toupper(letter);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == Lower) {
            lower++;
        }
        if (text[i] == Capital) {
            upper++;
        }
    }
    double n = strlen(text);
    cout << (char) tolower(letter) << " -> " << lower * 100.0 / n << "%" << endl;
    cout << (char) toupper(letter) << " -> " << upper * 100.0 / n << "%" << endl;
}


int main() {
    char text[1000], letter;

    cin.getline(text, 1000);

    cin >> letter;

    letterFrequency(text, letter);

    return 0;
}
