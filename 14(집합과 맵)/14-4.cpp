#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <unordered_map>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, m; cin >> n; cin >> m;
    vector<string> v(n);
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++){
        string name; cin >> name;
        v[i] = name;
        mp[name] = i;
    }
    for (int i = 0; i < m; i++){
        string str; cin >> str;
        if (isdigit(str[0])){
            cout << v[stoi(str) - 1] << "\n";
        }
        else {
            cout << mp.find(str) -> second + 1 << "\n";
        }
    }
    return 0;
}