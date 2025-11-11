#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    vector<int> v(5);
    for (unsigned int i = 0; i < 5; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    unsigned int sum = 0;
    for (auto& i : v){
        sum += i;
    }
    cout << sum / 5 << "\n" << v[2];
    return 0;
}