//
// Created by Ivana Stojkoska on 29.4.2026.
//
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int sumwhile =0;
    for (int i = 10; i <= 98; i += 2) {
        sum += i;
    }
    int i=10;
    while (i!=100) {
        sumwhile +=i;
        i+=2;
    }




    cout << "Sum for loop "<<sum<<endl;
    cout << "Sum while loop "<<sumwhile<<endl;
    return 0;
}
