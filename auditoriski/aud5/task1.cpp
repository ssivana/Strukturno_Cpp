//
// Created by Ivana Stojkoska on 29.4.2026.
//

#include <iostream>
using namespace std;


int main() {
    int msd,fd,sd,td;
    int sum = 0;

    for (int i = 1000; i < 10000; i++) {
        msd = i /1000;
        fd = (i/100) % 10;
        sd = (i/10) % 10;
        td = i % 10;
        sum = fd+sd+td;

        if (msd == sum) {
            cout << i << "\t";
        }
        sum = 0;

    }




    return 0;
}
