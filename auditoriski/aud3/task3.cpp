//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;


int main () {

    char letter;
    cin >> letter;

    if (letter >=65 && letter<=90) {
        cout << "The character is an uppercase letter 0: " << letter<< endl;
    } else if (letter >=97 && letter<=122) {
        cout << "The character is a lowercase letter 1: "<< letter << endl;
    }else if (letter >=48 && letter<=57) {
        cout << "The character is a digit: "<< letter<<endl;
    }


    return 0;
}