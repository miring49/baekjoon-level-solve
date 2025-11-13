#include <iostream>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool comp(const string& a, const string& b);

string string_v[20000];

int main() {
    fastio;
    unsigned int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> string_v[i];
    }
    sort(string_v, string_v + n, comp);
    for (int i = 0; i < n + 1; i++){
        if (string_v[i] == string_v[i-1] and i > 0){
            continue;
        }
        else {
            cout << string_v[i] << "\n";
        }
    }
    return 0;
}

bool comp (const string& a, const string& b){
    if (a.length() == b.length()){
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}