#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    unsigned int n, m; cin >> n >> m;
    vector<string> v1(n);
    vector<string> v2(m);

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
    vector<string> v_over;
    if (n >= m){
        for (auto& i : v2){
            if (binary_search(v1.begin(), v1.end(), i)){
                v_over.push_back(i);
                count++;
            }
        }
    }
    else {
        for (auto& i : v1){
            if (binary_search(v2.begin(), v2.end(), i)){
                v_over.push_back(i);
                count++;
            }
        }
    }
    sort(v_over.begin(), v_over.end());
    cout << count << "\n";
    if (count != 0){
        for (int i = 0; i < count; i++){
        cout << v_over[i] << "\n";
        }
    }
    return 0;
}