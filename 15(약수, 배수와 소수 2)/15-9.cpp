#include <iostream>
// #include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int n; cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++){
        count++;
    }
    cout << count << "\n";
    return 0;
}