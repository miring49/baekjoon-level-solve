#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <vector>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

bool comp(const pair<int, int> &p1,const pair<int, int> &p2) {
    if (p1.second == p2.second) {
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

int main() {
    fastio;
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << (int)floor((sum / float(n) + 0.5)) << "\n";
    cout << v[n/2] << "\n";
    vector<pair<int, int> > mod;
    vector<int>::size_type i;

    for (i = 0; i < v.size(); i++){
        if(mod.empty()){
            mod.push_back(pair<int, int>(v[i], 1));
            continue;
        }
        if (mod.back().first == v[i]){
            pair<int,int> tmp = mod.back();
            tmp.second++;
            mod.pop_back();
            mod.push_back(tmp);
        }
        else {
            mod.push_back(pair<int, int>(v[i], 1));
        }
    }
    sort(mod.begin(), mod.end(), comp);
    if (mod[0].second == mod[1].second){
        cout << mod[1].first << "\n";
    }
    else {
        cout << mod[0].first << "\n";
    }
    cout << v.back() - v.front() << "\n";
    return 0;
}