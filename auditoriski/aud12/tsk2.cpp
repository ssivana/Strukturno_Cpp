//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <iostream>
using namespace std;

int Ilen (char *a) {
    int count =0;
    for (int i=0; i < a[i]!='\0'; i++) {
        if (a[i]!='\0') {
            count++;
        }
    }
    return count;
}

int Rlen(char *a, int n) {
    if (a[n]=='\0') return 0;
    if (a[n]!='\0') return 1+ Rlen(a,n+1);
}

int main () {
    char a[100];
    cin.getline(a,100);

    cout << "The length of the string is: " << Ilen(a)<<endl;
    cout << "The length of the string is: " << Rlen(a,0);

    return 0;
}




