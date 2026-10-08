//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    float points;
    int grade;
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

    cout << "The grade is: " << grade << endl;


    return 0;
}
