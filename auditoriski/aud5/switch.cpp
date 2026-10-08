//
// Created by Ivana Stojkoska on 2.5.2026.
//

#include <iostream>
using namespace std;

int main () {
    char sign;
    cin >> sign;

    switch (sign) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout << "Vowel: " << sign << endl;
        break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            cout << "Digit: " << sign << endl;
            break;
            default:
            cout << "The input is: " << sign << endl;
    }


    return 0;
}



