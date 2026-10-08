//
// Created by Ivana Stojkoska on 24.5.2026.
//
#include <iostream>
using namespace std;

int main() {
    int z, x, y;
    cin >> z;
    int stat = 0;
    int count = 0;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) {
            break;
        }
        ++count;
        int sum = x + y;
        if (sum == z) {
            ++stat;
        }
    }
    double percent = (100 / (float) count) * (float) stat;
    cout << "Vnesovte " << stat << " parovi od broevi chij zbir e " << z << endl;
    cout << "Procentot na parovi so zbir " << z << " e " << percent << "%" << endl;


    return 0;
}
