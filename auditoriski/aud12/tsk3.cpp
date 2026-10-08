//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char main[100], copy[100];
    int pos, leng;
    cin.getline(main,100);
    cin >> pos >> leng;

    if (leng > strlen(main)) {
        cout << "The sub string cannot be longer than the string";
        return 0;
    } else {
        strncpy(copy,main+pos,leng+1);
        copy[leng]='\0';
        cout << copy;
    }
    return 0;
}