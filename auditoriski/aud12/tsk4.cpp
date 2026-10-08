//
// Created by Ivana Stojkoska on 13.5.2026.
//

#include <cstring>
#include <iostream>
using namespace std;

bool isSubString(char *niza, char *podniza) {
    if (strlen(podniza) > strlen(niza)) {
        return false;
    }
    for (int i = 0; i < strlen(niza); i++) {
        niza[i] = tolower(niza[i]);
    }
    for (int i = 0; i < strlen(podniza); i++) {
        podniza[i] = tolower(podniza[i]);
    }

    for (int i = 0; i <= strlen(niza) - strlen(podniza); i++) {
        bool is = true;
        for (int j = 0; j < strlen(podniza); j++) {
            if (niza[i+j]!=podniza[j]) {
                is =false;
                break;
            }
        }
        if (is) {
            return true;
        }
    }
   return false;
}


int main() {
    char niza[100], podniza[100];
    cin.getline(niza, 100);
    cin.getline(podniza, 100);
    cout << isSubString(niza, podniza);

    return 0;
}
