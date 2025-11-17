#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, m; cin >> n; cin >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    unsigned int count = 0;
    for (int i = 0; i < m; i++){
        string str; cin >> str;
        if (binary_search(v.begin(), v.end(), str)){
            count++;
        }
    }
    cout << count;
    return 0;
}