//
// Created by Ivana Stojkoska on 13.6.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

bool palindromes(char *a) {
    int len = strlen(a);
    int tmp = len - 1;
    bool is = true;
    for (int k = 0; k < len / 2; k++) {
        if (tolower(a[k]) != tolower(a[tmp])) {
            is = false;
            break;
        }
        tmp--;
    }
    return is;
}


int main() {
    char a[200];
    int n;
    cin >> n;
    cin.ignore();

    while (n > 0) {
        cin.getline(a, 200);
        char word[100];
        int count = 0, in = 0, i = 0;
        while (i < strlen(a)) {
            while (isspace(a[i])) {
                i++;
            }
            if (i == strlen(a) || a[i] == '\0') break;
            int j = 0;

            while (a[i] != '\0' && !isspace(a[i])) {
                word[j] = a[i];
                j++;
                i++;
            }

            word[j] = '\0';
            if (palindromes(word)) {
                count++;
            }
            in = 0;
        }

        cout << a << ": " << count << endl;


        n--;
    }


    return 0;
}
