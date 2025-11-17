#include <iostream>
#include <set>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string str; cin >> str;
    set<string> s;
    unsigned int len = str.length();
    for (int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            s.insert(str.substr(i,j-i+1));
        }
    }
    cout << s.size();
    return 0;
}