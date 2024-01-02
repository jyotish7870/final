#include<bits/stdc++.h>
using namespace std;
char check(char c) {
    if (c >= 'a' && c <= 'z') {
        return tolower(c);
    }

    if (c >= 'A' && c <= 'Z') {
        char newchar = 'a' + c - 'A';
        return newchar;
    }

    if (c >= '0' && c <= '9') {
        return c;
    }
   
    return '#';
}

bool checkPalindrome(string s) {
    string ourstring = "";
    int n = s.size();
    for (int i = 0; i < n; i++) {
        char c = check(s[i]);  
        if (c != '#') {
            ourstring += c;
        }
    }

    n = ourstring.size();

    for (int i = 0; i < n / 2; i++) {
        if (ourstring[i] != ourstring[n - 1 - i]) {
            return false;
        }
    }
    return true; 
}


