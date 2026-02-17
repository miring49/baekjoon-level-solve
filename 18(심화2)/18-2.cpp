#include <iostream>
#include <set>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    int m = 0;
    set<string> s;
    string str;
    for (int i = 0; i < n; i++){
        cin >> str;
        if (str == "ENTER"){
            m += int(s.size());
            s.clear();
            continue;
        }
        s.insert(str);
    }
    m += int(s.size());
    cout << m;
    return 0;
}