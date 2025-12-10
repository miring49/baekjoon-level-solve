#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;


int main() {
    fastio;
    int t; cin >> t;


    for (int i = 0; i < t; i++){
        int n, m; cin >> n >> m;
        long out = 1;
        int k = 1;
        for (int j = m; j > m - n; j--){
            out *= j;
            out /= k;
            k++;
        }
        cout << out << "\n";
    }
    return 0;
}