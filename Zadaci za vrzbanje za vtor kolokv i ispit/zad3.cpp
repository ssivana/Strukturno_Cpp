//
// Created by Ivana Stojkoska on 2.6.2026.
//
#include <iostream>
using namespace std;

int main() {
    int uplata;
    char sifra[9];
    int tip;
    float koeficient;
    cin >> uplata;
    int maxTip;
    char maxSifra[9];
    float dobivka = 1;
    float maxKoeficient = -1;
    while (cin >> sifra) {
        bool nee = true;
        for (int i = 0; i < 9; i++) {
            if (sifra[i] == '#') {
                nee = false;
                break;
            }
        }
        if (!nee) break;
        cin >> tip >> koeficient;
        if (maxKoeficient < koeficient) {
            maxKoeficient = koeficient;
            for (int i = 0; i < 9; i++) {
                maxSifra[i] = sifra[i];
            }
            maxTip = tip;
        }
        dobivka *= koeficient;
    }

    dobivka = dobivka * uplata;

    cout << maxSifra << " " << maxTip << " " << maxKoeficient << endl;
    cout << dobivka;

    return 0;
}
