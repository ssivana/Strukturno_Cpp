//
// Created by Ivana Stojkoska on 2.5.2026.
//
#include <iostream>
using namespace std;

int sum (int i) {
    int temp, lsds, msds;
    temp = i;
    lsds = temp % 100;
    msds = (temp / 100) % 100;
    return lsds + msds;
}

int main () {
    int msds, lsds,temp,count=0;

    for (int i=1000; i<=9999;i++) {


        if (i % sum(i) == 0) {
            cout << i << "\t";
            count ++;
        }
    }
    cout << endl;
    cout << "There are " << count << " numbers like this.";

    return 0;
}



