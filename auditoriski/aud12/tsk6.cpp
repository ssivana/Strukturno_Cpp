//
// Created by Ivana Stojkoska on 14.5.2026.
//

#include <cstring>
#include <iostream>
using namespace std;

bool isPalindrome(char *niza,int left, int right) {
    if (left>=right) {
        return true;
    }
    if (!isalpha(niza[left])) {
        return isPalindrome(niza,left+1,right);
    } if (!isalpha(niza[right])) {
        return isPalindrome(niza,left,right-1) ;
    }
    if (tolower(niza[left])!=tolower(niza[right])) {
        return false;
    }
    return isPalindrome(niza,left+1,right-1);
}

int main () {
    char niza[100];
    cin.getline(niza,100);
    bool iss = isPalindrome(niza,0, strlen(niza)-1);
    if (iss) {
        cout << "Its a palindrome";
    }else {
        cout << "Its not a palindrome" ;
    }

    return 0;
}

