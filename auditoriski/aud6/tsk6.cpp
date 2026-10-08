//
// Created by Ivana Stojkoska on 3.5.2026.
//

#include <iostream>
using namespace std;


long long Factoriel(int n) {
    if (n == 0) return 1;
    return n * Factoriel(n - 1);
}

long long SUM(int n) {
    long long sum =0;
    for (int i = 1 ;i <= n; i++) {
        sum +=i;
    }
    return sum;

}


int main() {
    int n;
    cin>> n;

    if (n > 0) {
        long long result = 0;
        long long s;
        for (int i = 1; i < n; ++i) {
            s = SUM(i);
            result += Factoriel(s);
            cout << s << "! + ";
        }
        s = SUM(n);
        result += Factoriel(s);
        cout << s << "! = " << result << endl;
    } else {
        cout << "Invalid input! " << endl;
    }

    return 0;
}
