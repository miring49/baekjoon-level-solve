#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, m; cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++){
        cin >> v2[i];
    }
    if (n != 1){
        sort(v1.begin(), v1.end());
    }
    if (m != 1){
        sort(v2.begin(), v2.end());
    }
    unsigned int count = 0;
    if (n >= m){
        for (auto& i : v2){
            if (binary_search(v1.begin(), v1.end(), i)){
                count++;
            }
        }
    }
    else {
        for (auto& i : v1){
            if (binary_search(v2.begin(), v2.end(), i)){
                count++;
            }
        }
    }
    cout << n + m - count*2;
    return 0;
}