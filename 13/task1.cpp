#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n; cin >> n;
    vector<int> v(n);
    for (unsigned int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (auto& i : v){
        cout << i << "\n";
    }
    return 0;
}