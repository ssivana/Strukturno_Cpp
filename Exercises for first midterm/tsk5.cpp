//
// Created by Ivana Stojkoska on 29.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int today, dates, n;
    cin >> today >> n;
    int tdDay = today / 1000000;
    int tdMon = (today / 10000) % 100;
    int tdYr = today % 10000;

    for (int i = 1; i <=n; ++i) {
        cin >> dates;
        int newDay = dates / 1000000;
        int newMonth = (dates / 10000) % 100;
        int newYear = dates % 10000;

        if (tdYr - newYear > 18) {
            cout << "YES" << endl;
        } else if (tdYr - newYear == 18) {
            if (newMonth < tdMon) {
                cout << "YES" << endl;
            } else if (tdMon == newMonth && newDay < tdDay) {
                cout << "YES" << endl;
            } else if (tdMon == newMonth && newDay == tdDay) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
