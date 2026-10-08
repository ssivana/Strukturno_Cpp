//
// Created by Ivana Stojkoska on 2.5.2026.
//

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Да се напише програма што ќе ги отпечати сите прости броеви помали од 10000 чиј
// што збир на цифри е исто така прост број. На крајот да се отпечати колку вакви броеви се пронајдени.

int main() {
    int count = 0;
    for (int i = 9999; i >= 2; i--) {
        if (isPrime(i) && isPrime(sumOfDigits(i))) {
            count++;
            cout << i << endl;
        }
    }
    cout << "Total numbers: "<<count;

    return 0;
}
