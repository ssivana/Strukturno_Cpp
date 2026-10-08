//
// Created by Ivana Stojkoska on 28.5.2026.
//


#include <iostream>
using namespace std;

int main() {
    int z, a, b, count = 0, pairs = 0;
    cin >> z;

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        ++pairs;

        if (a + b == z) {
            count++;
        }
    }
    float perc = 100.0 / pairs * count;

    cout << "You entered " << count << " pairs of numbers that have a sum equal to " << z << endl;
    cout << "The percentage of pairs with sum " << z << " is " << perc << "%" << endl;

    return 0;
}
