#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int a[1000000];

int main() {
    fastio;
    unsigned int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < n; i++){
        long index = lower_bound(v.begin(), v.end(),a[i]) - v.begin();
        cout << index << " ";
    }
    return 0;
}