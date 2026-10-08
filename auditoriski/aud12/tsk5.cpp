//
// Created by Ivana Stojkoska on 13.5.2026.
//
#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome (char*niza) {

    int len= strlen(niza);
    int i=0;
    int j= len-1;
    while (i<j) {
        if (tolower(niza[i]!=tolower(niza[j]))) {

            return false;
        }
        i++;
        j--;
    }

    return true;

}

bool issPalindrome(char * text){
    int n = strlen(text);

    for (int i=0;i<n/2;i++){
        if (text[i]!=text[n-i-1]){
            return false;
        } //ova od Stefan
    }

    return true;
}
int main () {
    char niza[100],palindrom[100];
    cin.getline(niza,100);

    if (isPalindrome(niza)) {
        cout << "It is a palindrom";
    }else {
        cout << "It is not a palindrom";
    }


    return 0;
}




