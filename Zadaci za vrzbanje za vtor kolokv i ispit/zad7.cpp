#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char array[100], longest[100];
    int max = 0;
    while (cin.getline(array, 100)) {
        if (array[0] == '0') break;
        int countdigits = 0;
        for (int i = 0; array[i] != '\0'; i++) {
            if (isdigit(array[i])) countdigits++;
        }
        if (countdigits >= 2) {
            if (max <= strlen(array)) {
                max = strlen(array);
                for (int i = 0; array[i] != '\0'; i++) {
                    longest[i] = array[i];
                }
                longest[max] = '\0';
            }
        }
    }
    char finalMax[100];

    int start = 0, end = 0;

    for (int i = 0; i < strlen(longest); i++) {
        if (isdigit(longest[i])) {
            start = i;
            break;
        }
    }
    for (int i = strlen(longest); i > start; i--) {
        if (isdigit(longest[i])) {
            end = i;
            break;
        }
    }
    int c = 0;
    for (int i = start; i <= end; i++) {
        finalMax[c] = longest[i];
        c++;
    }

    cout << finalMax;


    return 0;
}
