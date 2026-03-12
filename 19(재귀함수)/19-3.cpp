#include <iostream>
#include <cstring>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int count_m;

int recursion(const char *s, int l, int r){
    count_m++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main() {
    fastio;
    int T; cin >> T;
    string S;
    for (int i = 0; i < T; i++){
         cin >> S;
        count_m = 0;
        cout << isPalindrome(S.c_str()) << " " << count_m << "\n";
    }

    return 0;
}