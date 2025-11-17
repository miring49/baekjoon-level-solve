#include <iostream>
#include <string>
#include <algorithm>
#include <map>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;



int main() {
    fastio;
    unsigned int n; cin >> n;
    map<string, string, greater<string> > m;
    for (int i = 0; i < n; i++){
        string str, check; cin >> str >> check;
        if (check == "enter"){
            m.insert(make_pair(str, check));
        }
        else {
            m.erase(str);
        }
    }
    for (auto i : m){
        cout << i.first << "\n";
    }
    return 0;
}