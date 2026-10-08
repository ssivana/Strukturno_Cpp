//
// Created by Ivana Stojkoska on 29.4.2026.
//

#include <iostream>
using namespace std;

int main() {
    int points;
    int grade;
    char sign;
    cin >> points;


    if (points >= 0 && points <= 50) {
        // cout << "The grade is 5";
        grade = 5;
    } else if (points >= 51 && points <= 60) {
        // cout << "The grade is 6";
        grade = 6;
    } else if (points >= 61 && points <= 70) {
        // cout << "The grade is 7";
        grade = 7;
    } else if (points >= 71 && points <= 80) {
        // cout << "The grade is 8";
        grade = 8;
    } else if (points >= 81 && points <= 90) {
        // cout << "The grade is 9";
        grade = 9;
    } else if (points >= 91 && points <= 100) {
        // cout << "The grade is 10";
        grade = 10;
    } else {
        cout << "Invalid points";
        return 0;
    }

    int ld = points % 10;

    if (grade!=5 && grade!= 10) {
        if (ld >=1 && ld <=3) {
            sign = '-';
        } else  if (ld >=4 && ld <=7) {
            sign = ' ';
        } else if (ld == 8 || ld == 0 || ld == 9) {
            sign = '+';
        }
    }



    cout << "The grade is: " << grade  << sign << endl;


    return 0;
}
