#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int m; cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    unsigned int n; cin >> n;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        cout << upper_bound(v.begin(), v.end(), num)
        - lower_bound(v.begin(), v.end(), num) << " ";
    }
    return 0;
}