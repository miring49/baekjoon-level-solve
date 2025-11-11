#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, k; cin >> n >> k;
    vector<int> v(n);
    for (unsigned int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n-k];
    return 0;
}