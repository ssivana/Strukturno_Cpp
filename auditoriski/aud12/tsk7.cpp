//
// Created by Ivana Stojkoska on 14.5.2026.
//

#include <cstring>
#include <iostream>
using namespace std;

bool isPass(char pass[]) {
    bool lozinka = true;
    int znak = 0, letter = 0, digit = 0;
    for (int i = 0; i < strlen(pass); i++) {
        if (isalpha(pass[i])) {
            letter++;
        } else if (isdigit(pass[i])) {
            digit++;
        } else {
            znak++;
        }
    }
    if (znak >= 1 && letter >= 1 && digit >= 1) {
        return true;
    } else return false;
}


int main() {
    char pass[100];
    cin.getline(pass, 100);

    if (isPass(pass)) {
        cout << "Lozinka e";
    } else {
        cout << "Ne e lozinka";
    }
    return 0;
}
