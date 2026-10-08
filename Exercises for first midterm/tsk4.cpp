//
// Created by Ivana Stojkoska on 29.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    float points, maxpoints;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> points >> maxpoints;
        float perc = points / maxpoints * 100.0;
        if (perc < 50) {
            cout << perc << " FAIL" << endl;
            continue;
        }
        if (perc < 60) {
            cout << perc << " 6" << endl;
            continue;
        }
        if (perc < 70) {
            cout << perc << " 7" << endl;
            continue;
        }
        if (perc < 80) {
            cout << perc << " 8" << endl;
            continue;
        }
        if (perc < 90) {
            cout << perc << " 9" << endl;
            continue;
        }
        if (perc < 100) {
            cout << perc << " 10" << endl;
        }
    }


    return 0;
}
