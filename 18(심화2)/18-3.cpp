#include <iostream>
#include <map>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n; cin >> n;
    int count = 0;
    map<string, bool> m;
    string str_a, str_b;
    for (int i = 0; i < n; i++){
        cin >> str_a >> str_b;
        if (str_a == "ChongChong"){
            m.insert(make_pair(str_a, true));
        }
        else if (str_b == "ChongChong"){
            m.insert(make_pair(str_b, true));
        }
        if (m[str_a]){
            m[str_b] = true;
        }
        if (m[str_b]){
            m[str_a] = true;
        }
    }
    for (auto& val: m){
        if(val.second){
            count++;
        }
    }
    cout << count;
    return 0;
}