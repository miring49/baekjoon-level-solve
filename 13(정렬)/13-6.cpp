#include <iostream>
#include <string>
#include <algorithm>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    string string;
    cin >> string;
    sort(string.begin(), string.end(), greater<int>());
    for (auto& i : string){
        cout << i;
    }
    return 0;
}