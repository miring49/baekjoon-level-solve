#include <iostream>
#include <string>
#include <map>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool comp (pair<string,int> const& l, pair<string, int> const& r){
    if (l.second != r.second){
        return l.second > r.second;
    }
    else if (l.first.length() != r.first.length()){
        return l.first.length() > r.first.length();
    }
    else {
        return l.first < r.first;
    }
}

int main() {
    fastio;
    int n, m; cin >> n >> m;
    string str;
    map<string, int> M;
    for (int i = 0; i < n; i++){
        cin >> str;
        if (str.size() >= m){
            M[str]++;
        }
    }
    vector<pair<string, int> > v(M.begin(), M.end());
    sort(v.begin(), v.end(), comp);
    for (auto& val : v)
		cout << val.first << "\n";
    return 0;
}